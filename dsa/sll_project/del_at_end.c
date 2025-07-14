#include<stddef.h>
#include<stdlib.h>
#include"header.h"
extern struct list *head,*tail,*current;
void del_at_end()
{
	if(head==NULL)
	{
		return;
	}
	if(head->next==NULL)
	{
		free(head);
		head=NULL;
		tail=NULL;
		return;
	}
	struct list *current=head;
	while(current->next->next!=NULL)
	{
		current=current->next;
	}
	free(current->next);
	current->next=NULL;
	tail=current;
}
