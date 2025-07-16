#include<stdio.h>
#include<stdlib.h>
struct list 
{
    int data;
    struct list *next;
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
void display_node()
{
    for(struct list *t=head;t!=NULL;t=t->next)
    {
        printf("%d ",t->data);
    }
}
void delete_sll()
{
    struct list *current=head;
    struct list *new_node;
    while(current!=NULL)
    {
        new_node=current->next;
        free(current);
        current=new_node;
    }
    head=NULL;
}
int main()
{
    int n,val;
    printf("Enter the number of nodes:\n");
    scanf("%d",&n);
    printf("Enter the nodes:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        create_node(val);
        insert_node();
    }
    printf("Linked list:\n");
    display_node();
    printf("\n");
    printf("Linked list deleted successfully!\n");
    delete_sll();
    return 0;
}
