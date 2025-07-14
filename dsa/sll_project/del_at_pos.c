#include<stddef.h>
#include<stdlib.h>
#include"header.h"
extern struct list *head,*tail;
extern int pos;
void del_at_pos()
{
	if(head==NULL)
	{
		return;
	}
	if(pos==0)
	{
		struct list *temp=head;
		head=head->next;
		free(temp);
		if(head==NULL)
		{
			tail=NULL;
		}
		return;
	}
	struct list *current=head;
	for(int i=1;i<pos-1;i++)
	{
		if(current==NULL||current->next==NULL)
		{
			return;
		}
		current=current->next;
	}
	struct list *temp=current->next;
	if(temp==NULL)
	{
		return;
	}
	current->next=temp->next;
	temp->next=NULL;
	if(current->next==NULL)
	{
		tail=current;
	}
	free(temp);
}

