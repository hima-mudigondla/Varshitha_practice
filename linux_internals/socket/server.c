#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <pthread.h>

#define PORT 8080
#define MAX 1024

int connfd; // global so both threads can access
volatile int running = 1;

void *receive_messages(void *arg) {
    char buffer[MAX];
    while (running) {
        bzero(buffer, MAX);
        int bytes = read(connfd, buffer, sizeof(buffer));
        if (bytes <= 0) {
            printf("\nClient disconnected.\n");
            running = 0;
            break;
        }
        printf("\nClient: %s", buffer);
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
        write(connfd, buffer, strlen(buffer));

        if (strncmp(buffer, "exit", 4) == 0) {
            running = 0;
            break;
        }
    }
    return NULL;
}

int main() {
    int sockfd;
    struct sockaddr_in servaddr, cliaddr;
    socklen_t len = sizeof(cliaddr);

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("socket creation failed");
        exit(1);
    }

    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = INADDR_ANY;
    servaddr.sin_port = htons(PORT);

    if (bind(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) != 0) {
        perror("bind failed");
        exit(1);
    }

    if (listen(sockfd, 5) != 0) {
        perror("listen failed");
        exit(1);
    }

    printf("Server listening on port %d...\n", PORT);
    connfd = accept(sockfd, (struct sockaddr*)&cliaddr, &len);
    if (connfd < 0) {
        perror("accept failed");
        exit(1);
    }

    printf("Client connected!\n");

    pthread_t send_thread, recv_thread;
    pthread_create(&send_thread, NULL, send_messages, NULL);
    pthread_create(&recv_thread, NULL, receive_messages, NULL);

    pthread_join(send_thread, NULL);
    pthread_join(recv_thread, NULL);

    close(connfd);
    close(sockfd);
    printf("Chat ended.\n");
    return 0;
}

