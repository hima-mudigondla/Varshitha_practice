#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MQTTClient.h"

#define ADDRESS     "dev.rightech.io:1883"
#define CLIENTID    "mqtt-hima_mudigondla-rfha7w"
#define TOPIC       "base/relay/led1"
#define QOS         1
#define TIMEOUT     10000L

volatile MQTTClient_deliveryToken deliveredtoken;
#define LED_PATH "/sys/class/leds/user/brightness"
void led_write(int state)
{
    FILE *fp = fopen(LED_PATH, "w");
    if (fp == NULL) {
        perror("Failed to access LED device");
        return;
    }
    fprintf(fp, "%d", state);
    fclose(fp);
}

void delivered(void *context, MQTTClient_deliveryToken dt)
{
    printf("Message with token value %d delivery confirmed\n", dt);
    deliveredtoken = dt;
}

int msgarrvd(void *context, char *topicName, int topicLen, MQTTClient_message *message)
{
    char payload[message->payloadlen + 1];
    memcpy(payload, message->payload, message->payloadlen);
    payload[message->payloadlen] = '\0';

    printf("Message arrived\n");
    printf("     topic: %s\n", topicName);
    printf("   message: %s\n", payload);

    // Compare incoming message to commands
    if (strcasecmp(payload, "LED ON") == 0) {
        printf("Turning LED ON\n");
        led_write(1);
    } else if (strcasecmp(payload, "LED OFF") == 0) {
        printf("Turning LED OFF\n");
        led_write(0);
    } else {
        printf("Unknown command received\n");
    }

    MQTTClient_freeMessage(&message);
    MQTTClient_free(topicName);
    return 1;
}

void connlost(void *context, char *cause)
{
    printf("\nConnection lost\n");
    if (cause)
        printf("     cause: %s\n", cause);
}

int main(int argc, char* argv[])
{
    MQTTClient client;
    MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;
    int rc;

    printf("Connecting to MQTT broker at %s\n", ADDRESS);

    if ((rc = MQTTClient_create(&client, ADDRESS, CLIENTID,
        MQTTCLIENT_PERSISTENCE_NONE, NULL)) != MQTTCLIENT_SUCCESS)
    {
        printf("Failed to create client, return code %d\n", rc);
        return EXIT_FAILURE;
    }

    MQTTClient_setCallbacks(client, NULL, connlost, msgarrvd, delivered);

    conn_opts.keepAliveInterval = 20;
    conn_opts.cleansession = 1;

    if ((rc = MQTTClient_connect(client, &conn_opts)) != MQTTCLIENT_SUCCESS)
    {
        printf("Failed to connect, return code %d\n", rc);
        MQTTClient_destroy(&client);
        return EXIT_FAILURE;
    }

    printf("Subscribed to topic: %s\n", TOPIC);
    MQTTClient_subscribe(client, TOPIC, QOS);

    printf("\nWaiting for LED commands...\n(Type Q and Enter to quit)\n");

    int ch;
    do {
        ch = getchar();
    } while (ch != 'Q' && ch != 'q');

    MQTTClient_unsubscribe(client, TOPIC);
    MQTTClient_disconnect(client, 10000);
    MQTTClient_destroy(&client);
    return 0;
}

