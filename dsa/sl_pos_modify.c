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
int modify_val(int pos,int new_val)
{
    struct list *t=head;
    int index=0;
    while(t!=NULL)
    {
        if(index==pos)
        {
            t->data=new_val;
        }
        t=t->next;
        index++;
    }
    return 0;
}
int main()
{
    int n,val,pos,num;
    printf("Enter number of values:\n");
    scanf("%d",&n);
    printf("Enter the values:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        create_node(val);
        insert();
    }
    printf("Linked list:\n");
    display();
    printf("Enter the position and value to modify:\n");
    scanf("%d%d",&pos,&num);
    modify_val(pos,num);
    printf("Linked list after modify:\n");
    display();
    return 0;
}
