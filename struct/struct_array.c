#include<stdio.h>
struct student
{
	int rollno;
	char name[10];
	float age;
	int marks;
};
int main()
{
	int num;
	printf("Enter the number of elements of struct:\n");
	scanf("%d",&num);
	struct student s[num];
	for(int i=0;i<num;i++)
	{
		printf("Enter the roll numbers:\n");
		scanf("%d",&s[i].rollno);
		printf("Enter the names:\n");
		getchar();
                scanf("%[^\n]",s[i].name);
		printf("Enter the age:\n");
                scanf("%f",&s[i].age);
		printf("Enter the marks:\n");
                scanf("%d",&s[i].marks);
	}
	for(int i=0;i<num;i++)
	{
		printf("Roll numbers:%d\n",s[i].rollno);
		printf("Student names:%s\n",s[i].name);
		printf("Students age:%f\n",s[i].age);
		printf("Students marks:%d\n",s[i].marks);
		printf("___________________________________________\n");
	}
	printf("Size of s:%ld\n",sizeof(s));
	return 0;
}
