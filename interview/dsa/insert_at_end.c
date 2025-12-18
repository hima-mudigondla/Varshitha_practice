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
void insert_at_end()
{
    tail->next=temp;
    tail=temp;
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
    printf("Enter the size of liked list:\n");
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
    printf("Enter the element to insert at ending:\n");
    scanf("%d",&val1);
    create_node(val1);
    insert_at_end();
    printf("After inserting at begining:\n");
    display();
    return 0;
}
