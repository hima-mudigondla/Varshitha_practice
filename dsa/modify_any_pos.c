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
void modify_any_pos(int pos,int new_val)
{
    int i=0;
    struct list *t=head;
    while(i<pos-1&&t!=NULL)
    {
        t=t->next;
        i++;
    }
    if(t!=NULL)
    {
        t->data=new_val;
    }
    else
    {
        printf("Invalid position!\n");
    }
}
int main()
{
    int n,val,val1,pos;
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
    printf("Enter the position and the value:\n");
    scanf("%d%d",&pos,&val1);
    modify_any_pos(pos,val1);
    printf("After modifying at %d position:\n",pos);
    display_node();
    printf("\n");
    return 0;
}
