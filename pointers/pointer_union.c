#include<stdio.h>
#include<string.h>
union student
{
	int id;
	char name[20];
	int age;
	int marks;
};
int main()
{
	union student stu,*p;
	strcpy(stu.name,"alice");
	p=&stu;
	printf("Student name:%s\t%s\n",p->name,(*p).name);
	return 0;
}
