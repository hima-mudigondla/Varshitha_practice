#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *next;
    struct list *prev;
};
struct list *head,*tail,*temp;
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
void insert()
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
void display()
{
    struct list *t=head;
    while(t!=NULL)
    {
        printf("%d ",t->data);
        t=t->next;
    }
}
void insert_at_beg()
{
    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    temp->next=head;
    temp->prev=NULL;
    head->prev=temp;
    head=temp;
}
int main()
{
    int n,val,val1;
    printf("Enter the number of nodes:\n");
    scanf("%d",&n);
    printf("Enter the values:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        create_node(val);
        insert();
    }
    printf("Double linked list:\n");
    display();
    printf("\n");
    printf("Enter the node to insert at begining:\n");
    scanf("%d",&val1);
    create_node(val1);
    insert_at_beg();
    printf("Double linked list after inserting:\n");
    display();
    printf("\n");
    return 0;
}
