#include<stdio.h>
struct employee 
{
	int emp_id;
	char emp_name[50];
	int age;
	int salary;
};
int main()
{
	struct employee emp={1234,"john",45,100000};
	struct employee emp1;
	emp1=emp;
	printf("Emp1 details:%d %s %d %d\n",emp1.emp_id,emp1.emp_name,emp1.age,emp1.salary);
	printf("Size of struct:%ld\n",sizeof(emp));
	return 0;
}
	

