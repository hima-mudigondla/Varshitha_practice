#include<stdlib.h>
#include<stdio.h>
#include"header.h"
extern struct list *temp;
struct list *create_node()
{
	int x;
	printf("Enter the x:\n");
	scanf("%d",&x);
	temp=(struct list *)malloc(sizeof(struct list));
	if(temp==NULL)
	{
		return NULL;
	}
	temp->data=x;
	temp->next=NULL;
	return temp;
}
