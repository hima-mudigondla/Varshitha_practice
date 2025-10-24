#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <pthread.h>

#define PORT 8080
#define MAX 1024

int sockfd;
volatile int running = 1;

void *receive_messages(void *arg) {
    char buffer[MAX];
    while (running) {
        bzero(buffer, MAX);
        int bytes = read(sockfd, buffer, sizeof(buffer));
        if (bytes <= 0) {
            printf("\nServer disconnected.\n");
            running = 0;
            break;
        }
        printf("\nServer: %s", buffer);
        if (strncmp(buffer, "exit", 4) == 0) {
            running = 0;
            break;
        }
        printf("You: ");
        fflush(stdout);
    }
    return NULL;
}

void *send_messages(void *arg) {
    char buffer[MAX];
    while (running) {
        printf("You: ");
        bzero(buffer, MAX);
        fgets(buffer, MAX, stdin);
        write(sockfd, buffer, strlen(buffer));

        if (strncmp(buffer, "exit", 4) == 0) {
            running = 0;
            break;
        }
    }
    return NULL;
}

int main() {
    struct sockaddr_in servaddr;
    char server_ip[20];

    printf("Enter Server IP: ");
    scanf("%s", server_ip);
    getchar(); // consume newline

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("socket creation failed");
        exit(1);
    }

    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(PORT);
    servaddr.sin_addr.s_addr = inet_addr(server_ip);

    if (connect(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) != 0) {
        perror("connection failed");
        exit(1);
    }

    printf("Connected to server!\n");

    pthread_t send_thread, recv_thread;
    pthread_create(&send_thread, NULL, send_messages, NULL);
    pthread_create(&recv_thread, NULL, receive_messages, NULL);

    pthread_join(send_thread, NULL);
    pthread_join(recv_thread, NULL);

    close(sockfd);
    printf("Chat ended.\n");
    return 0;
}

