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
void insert_at_pos(int pos,int n1)
{
    int i=1;
    struct list *t=head;
    printf("Enter the position:\n");
    scanf("%d",&pos);
    printf("Enter the data to be inserted:\n");
    scanf("%d",&n1);
    struct list *new_node=create_node(n1);
    if(pos==0)
    {
        new_node->next=head;
        head=new_node;
	return;
    }
    for(;t!=NULL && i<pos;t=t->next,i++);
    new_node->next=t->next;
    t->next=new_node;
}
int main()
{
    int n,pos,n1;
    struct list *new_node,*t;
    printf("Enter the data in the node:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&n);
        create_node(n);
        insert();
    }
    printf("Linked list is:\n");
    display();
    insert_at_pos(pos,n1);
    printf("List after insertion:\n");
    display();
    return 0;
}


