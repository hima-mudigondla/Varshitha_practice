#include<stddef.h>
#include"header.h"
extern struct list *head,*tail,*temp;
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
