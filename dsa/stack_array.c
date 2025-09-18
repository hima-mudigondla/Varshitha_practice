#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int n)
{
    if(top==MAX-1)
    {
        printf("Stack is full!\n");
        return;
    }
    else
    {
        stack[++top]=n;
    }
}
int pop()
{
    if(top==-1)
    {
        printf("No elements to pop!\n");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack is empty!\n");
    }
    else
    {
       // printf("Stack elements:\n");
        for(int i=0;i<=top;i++)
        {
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the elements:\n");
    for(int i=0;i<MAX;i++)
    {
        scanf("%d",&n);
        push(n);
    }
    printf("Stack elements:\n");
    display();
    printf("After popping last element:\n");
    pop();
    display();
    return 0;
}

