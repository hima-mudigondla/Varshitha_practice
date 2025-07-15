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
void display()
{
	for(struct list *t=head;t!=NULL;t=t->next)
	{
		printf("%d ",t->data);
	}
}
/*void print_reverse(struct list *node)
{
    if (node == NULL)
        return;
    print_reverse(node->next);
    printf("%d ", node->data);
}*/
void reverse_list() 
{
    struct list *prev = NULL;
    struct list *current = head;
    struct list *next = NULL;

    while (current != NULL) 
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
int main()
{
	int n,val;
	printf("Enter the number of nodes:\n");
	scanf("%d",&n);
	printf("Enter the values in nodes:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&val);
		create_node(val);
		insert_node();
	}
	printf("Linked list:\n");
	display();
	printf("\n");
	printf("Reversed linked list:\n");
//	print_reverse(head);
	reverse_list();
	display();
	printf("\n");
	return 0;
}


