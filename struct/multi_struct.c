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
        struct student s1,s2,s3;
        s1.std_id=3546;
        printf("Enter the student name:\n");
        scanf("%s",s1.name);
        printf("Enter the student age and marks:\n");
        scanf("%f",&s1.age);
        scanf("%d",&s1.marks);
        printf("Student id:%d\n",s1.std_id);
        printf("Student name:%s\n",s1.name);
        printf("Student age:%f\n",s1.age);
        printf("Student marks:%d\n",s1.marks);
	printf("-----------------------------------------------\n");
	printf("DETAILS OF SECOND STUDENT:\n");
	s2.std_id=3547;
        printf("Enter the student name:\n");
        scanf("%s",s2.name);
	printf("Enter the student age and marks:\n");
        scanf("%f",&s2.age);
        scanf("%d",&s2.marks);
	printf("Student id:%d\n",s2.std_id);
        printf("Student name:%s\n",s2.name);
        printf("Student age:%f\n",s2.age);
	printf("Student marks:%d\n",s2.marks);
	printf("-----------------------------------------------\n");
	printf("DETAILS OF THIRD STUDENT:\n");
	s3.std_id=3548;
        printf("Enter the student name:\n");
        scanf("%s",s3.name);
	printf("Enter the student age and marks:\n");
        scanf("%f",&s3.age);
        scanf("%d",&s3.marks);
	printf("Student id:%d\n",s3.std_id);
        printf("Student name:%s\n",s3.name);
        printf("Student age:%f\n",s3.age);
	printf("Student marks:%d\n",s3.marks);
        return 0;
}
