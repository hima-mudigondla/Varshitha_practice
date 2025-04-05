#include<stdio.h>
struct student
{
	int std_id;
	char name[50];
	float age;
	int marks;
};
int main()
{
	struct student s1;
	s1.std_id=3546;
	printf("Enter the student name:\n");
	fgets(s1.name,50,stdin);
	printf("Enter the student age and marks:\n");
	scanf("%f",&s1.age);
	scanf("%d",&s1.marks);
	printf("Student id:%d\n",s1.std_id);
	printf("Student name:%s\n",s1.name);
	printf("Student age:%f\n",s1.age);
	printf("Student marks:%d\n",s1.marks);
	return 0;
}
