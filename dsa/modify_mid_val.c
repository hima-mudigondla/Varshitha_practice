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
void modify_mid_val(int new_val)
{
    struct list *slow=head;
    struct list *fast=head;
    if(head==NULL)
    {
        return;
    }
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        if(fast!=NULL)
        {
            slow=slow->next;
        }
    }
    slow->data=new_val;
    display_node();
    printf("\n");
}
int main()
{
    int n,val,val1;
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
    printf("Enter the new value:\n");
    scanf("%d",&val1);
    printf("After modify the mid value:\n");
    modify_mid_val(val1);
    printf("\n");
    return 0;
}
