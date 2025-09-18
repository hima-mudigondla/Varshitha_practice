#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *next;
};
struct list *temp,*top=NULL;
void push(int n)
{
    temp=(struct list *)malloc(sizeof(struct list));
    if(temp==NULL)
    {
        printf("Cannot push!");
        return;
    }
    temp->data=n;
    temp->next=top;
    top=temp;
}
int pop()
{
    if(top==NULL)
    {
        return -1;
    }
    temp=top;
    int popped=temp->data;
    top=top->next;
    free(temp);
    return popped;
}
void display()
{
    if(top==NULL)
    {
        printf("Stack is empty!");
        return;
    }
    struct list *temp=top;
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
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        push(val);
    }
    printf("Stack elements:\n");
    display();
    printf("Popped element:\n");
    pop();
    display();
    return 0;
}
