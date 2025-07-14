#include<stdio.h>
#include<stdlib.h>
#include"header.h"
struct list *temp;
struct list *head=NULL,*tail=NULL;
struct list *current,*new_node;
int pos;
int main()
{
	int n,val,choice;
	printf("Enter the number of nodes:\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		create_node();
		insert();
	}
	printf("Linked list:\n");
	display();
	printf("\n");
	while(1)
	{
	printf("1.Insert at Begining\n2.Insert at Ending\n3.Insert at Position\n4.Delete at Begining\n5.Delete at Ending\n6.Delete at position\n");
	printf("Enter the choice:\n");
	scanf("%d",&choice);
	switch(choice)
		{
			case 1:new_node=create_node();
			      insert_at_beg();
			      printf("Linked list after inserting at begining:\n");
			      display();
			      printf("\n"); 
			      break;
			case 2:new_node=create_node();
			       insert_at_end();
			       printf("Linked list after inserting at ending:\n");
			       display();
			       printf("\n");
			       break;
			case 3: new_node=create_node();
			       printf("Enter the position to insert:\n");
			       scanf("%d",&pos);
			       insert_at_pos();
			       printf("Linked list after inserting at position:\n");
			       display();
			       printf("\n"); 
			       break;
			case 4:del_at_beg();
			       printf("Linked list after deleting at begining:\n");
                               display();
                               printf("\n");
			       break;
			case 5:del_at_end();
			       printf("Linked list after deleting at ending:\n");
                               display();
                               printf("\n");
			       break;
			case 6:printf("Enter the position to delete:\n");
			       scanf("%d",&pos);
			       del_at_pos();
			       printf("Linked list after deleting at position:\n");
                               display();
                               printf("\n");
			       break;
			default:printf("Enter the correct choice!\n");
		 		break;
		}		

	}
	return 0;
}
