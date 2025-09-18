#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *next;
    struct list *prev;
};
struct list *head=NULL,*tail=NULL,*temp;
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
void display()
{
    struct list *t=head;
    while(t!=NULL)
    {
        printf("%d ",t->data);
        t=t->next;
    }
}
void delete_beg()
{
    temp=head;
    head=temp->next;
    head->prev=NULL;
    temp->next=NULL;
    free(temp);
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
    printf("Double linked list:\n");
    display();
    printf("\n");
    delete_beg();
    printf("Double linked list after deleting at begining:\n");
    display();
    printf("\n");
    return 0;
}
    

