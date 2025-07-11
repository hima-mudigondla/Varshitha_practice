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
void del_beg()
{
    temp=head;
    head=temp->next;
    temp->next=NULL;
    free(temp);
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
    printf("Linked list after deleting first node:\n");
    del_beg();
    display();
    return 0;
}

