#include<stdio.h>
struct student
{
        int rollno;
        char name[10];
        float age;
        int marks;
	char h;
	int x;
	long int c;
	int a;
	int b;
};
int main()
{
	struct student s;
	printf("Size of struct:%ld\n",sizeof(s));
	return 0;
}
