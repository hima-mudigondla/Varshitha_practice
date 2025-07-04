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
    //list *temp;
    temp=(struct list *)malloc(sizeof(struct list));
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
    printf("\n");
}
void del_ele()
{
    head=head->next;
}
int main()
{
    int n,pos,n1;
    //struct list *new_node,*t;
    printf("Enter the data in the node:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&n);
        temp=create_node(n);
        insert();
    }
    printf("Linked list is:\n");
    display();
    del_ele();
    printf("List after deletion:\n");
    display();
    return 0;
}

