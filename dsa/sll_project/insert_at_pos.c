#include<stddef.h>
#include"header.h"
extern int pos;
extern struct list *new_node,*head;
void insert_at_pos()
{
	int i=0;
	struct list *t=head;
	for(;t!=NULL,i<pos;t=t->next,i++);
	new_node->next=t->next;
	t->next=new_node;
}
