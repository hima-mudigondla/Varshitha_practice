#include"header.h"
extern struct list *tail,*temp;
void insert_at_end()
{
	tail->next=temp;
	tail=temp;
}
