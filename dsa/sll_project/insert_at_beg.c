#include"header.h"
extern struct list *new_node,*head;
void insert_at_beg()
{
	new_node->next=head;
	head=new_node;
}

