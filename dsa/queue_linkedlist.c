#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *next;
};
struct list *front=NULL,*rear=NULL;
void enqueue(int val)
{
    struct list *temp=(struct list *)malloc(sizeof(struct list));
    temp->data=val;
    temp->next=NULL;
    if(rear==NULL)
    {
        front=rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
}
void dequeue()
{
    if(front==NULL)
    {
        printf("Queue is empty!\n");
    }
    struct list *temp=front;
    front=front->next;
    if(front==NULL)
    {
        rear=NULL;
    }
    free(temp);
}
void display()
{
    if(front==NULL)
    {
        printf("Queue is empty!\n");
    }
    struct list *temp=front;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    int n,val;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elememnts:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        enqueue(val);
    }
    printf("Queue elements:\n");
    display();
    printf("After removing one element:\n");
    dequeue();
    display();
    return 0;
}

