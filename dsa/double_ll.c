#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *next;
    struct list *prev;
};
struct list *head=NULL,*tail=NULL;
struct list *temp;
struct list *create_node(int n)
{
    temp=(struct list *)malloc(sizeof(struct list));
    if(temp==NULL)
    {
        return NULL;
    }
    temp->data=n;
    temp->next=NULL;
    temp->prev=NULL;
    return temp;
}
void insert_node()
{
    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else
    {
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}
void display_fwd()
{
    struct list *t=head;
    while(t!=NULL)
    {
        printf("%d ",t->data);
        t=t->next;
    }
    printf("\n");
}
void display_bwd() 
{
    struct list *t = tail;
    while (t) 
    {
        printf("%d ", t->data);
        t = t->prev;
    }
    printf("\n");
}
int main()
{
    int n,val;
    printf("Enter the number of values:\n");
    scanf("%d",&n);
    printf("Enter the %d values:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        create_node(val);
        insert_node();
    }
    printf("Double linked list forward:\n");
    display_fwd();
    printf("Double linked list backward:\n");
    display_bwd();
    return 0;
}
