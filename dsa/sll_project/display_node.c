#include<stdio.h>
#include"header.h"
extern struct list *head;
void display()
{
	struct list *t=head;
	for(;t!=NULL;t=t->next)
	{
		printf("%d ",t->data);
	}
}
