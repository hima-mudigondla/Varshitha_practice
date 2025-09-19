#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front=-1,rear=-1;
void enqueue(int value)
{
    if((rear+1)%SIZE==front)
    {
        printf("Queue is full!\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear=(rear+1)%SIZE;
        queue[rear]=value;
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front=(front+1)%SIZE;
        }
    }
}
void display()
{
    if(front==-1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        int i=front;
        while(1)
        {
            printf("%d ",queue[i]);
            if(i==rear)break;
            i=(i+1)%SIZE;
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the elements:\n");
    for(int i=0;i<SIZE;i++)
    {
        scanf("%d",&n);
        enqueue(n);
    }
    printf("Queue elements:\n");
    display();
    dequeue();
    printf("After removing one element:\n");
    display();
    return 0;
}
