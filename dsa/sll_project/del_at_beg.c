#include<stdlib.h>
#include<stddef.h>
#include"header.h"
extern struct list *temp,*head;
void del_at_beg()
{
	temp=head;
	head=temp->next;
	temp->next=NULL;
	free(temp);
}
