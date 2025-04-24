#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	int age;
	int salary;
};
int main()
{
	struct employee emp={1234,"alexa",35,85000},*p;
	p=&emp;
	printf("Employee details:%d\t %s\t %d\t %d\n",p->id,p->name,(*p).age,(*p).salary);
	return 0;
}
	

