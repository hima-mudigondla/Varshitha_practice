#include<stdio.h>
struct student 
{
	int id;
	char name[30];
	int marks;
};
int main()
{
	int n;
	printf("Enter the number of students:\n");
	scanf("%d",&n);
	struct student stu[n],*p;
	p=stu;
	for(int i=0;i<n;i++)
	{
		printf("Enter the %d student details:\n",i+1);
		printf("Student id:");
		scanf("%d",&(p->id));
		printf("student name:");
		scanf("%29s",p->name);
		printf("Student marks:");
		scanf("%d",&(p->marks));
		p++;
	}
	p=stu;	
	for(int i=0;i<n;i++)
        {
		printf("---------------------------------------------\n");
		printf("%d STUDENT DETAILS!!",i+1);
                printf("Student id:%d\n",(*(p+i)).id);
                printf("student name:%s\n",(*(p+i)).name); 
		printf("Student marks:%d\n",(*(p+i)).marks);
	}
	return 0;
}
		


