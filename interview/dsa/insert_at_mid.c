#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *next;
};
struct list *temp,*head=NULL,*tail=NULL;
struct list *create_node(int n)
{
    temp=(struct list*)malloc(sizeof(struct list));
    if(temp==NULL)
    {
        return NULL;
    }
    temp->data=n;
    temp->next=NULL;
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
        tail=temp;
    }
}
void insert_mid(int val1)
{
    struct list *slow=head;
    struct list *fast=head;
    struct list *new_node=(struct list*)malloc(sizeof(struct list));
    new_node->data=val1;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    new_node->next=slow->next;
    slow->next=new_node;
}
void display()
{
    for(struct list *t=head;t!=NULL;t=t->next)
    {
        printf("%d ",t->data);
    }
}
int main()
{
    int n,val,val1;
    printf("Enter the number of nodes:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        create_node(val);
        insert_node();
    }
    printf("Linked list:\n");
    display();
    printf("\n");
    printf("Enter the node to insert in middle:\n");
    scanf("%d",&val1);
    insert_mid(val1);
    printf("Linked list after inserting at mid:\n");
    display();
    return 0;
}
