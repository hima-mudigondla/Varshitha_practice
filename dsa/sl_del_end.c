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
    temp=(struct list*)malloc(sizeof(struct list));
    if(temp==NULL)
    {
        return NULL;
    }
    temp->data=n;
    temp->next=NULL;
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
        tail=temp;
    }
}
void display()
{
    for(struct list *t=head;t!=NULL;t=t->next)
    {
        printf("%d ",t->data);
    }
}
void del_end()
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        free(head);
        head=NULL;
        tail=NULL;
        return;
    }
    struct list* current=head;
    while(current->next->next!=NULL)
    {
        current=current->next;
    }
    free(current->next);
    current->next=NULL;
    tail=current;
}
int main()
{
    int n,val;
    printf("Enter the number of values:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        create_node(val);
        insert();
    }
    printf("Linked list is:\n");
    display();
    printf("\n");
    printf("Linked list after deleting last node:\n");
    del_end();
    display();
    return 0;
}

