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
void delete_at_position(int pos) {
    if (head == NULL) {
       
        return;
    }
    if (pos == 0) {
        struct list* temp = head;
        head = head->next;
        free(temp);
        if (head == NULL) {
           
            tail = NULL;
        }
        return;
    }

    struct list* current = head;
    for (int i = 1; i < pos - 1; i++) {
        if (current == NULL || current->next == NULL) {
            
            return;
        }
        current = current->next;
    }

    
    struct list* temp = current->next;
    if (temp == NULL) {
        
        return;
    }

    current->next = temp->next;
    temp->next=NULL;
    if (current->next == NULL) {
       
        tail = current;
    }
    free(temp);
}


int main()
{
    int n,val,pos;
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
    printf("enter the position to delete:\n");
    scanf("%d",&pos);
    printf("Linked list after deleting node:\n");
    delete_at_position(pos);
    display();
    return 0;
}

