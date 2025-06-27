#include<stdio.h>
struct student
{
    int rollno;
    char name[50];
};
void call_by_value(struct student s)
{
    printf("rollno:%d\tname:%s\n",s.rollno,s.name);
}
void call_by_reference(struct student *s1)
{
    printf("rollno:%d\tname:%s\n",s1->rollno,s1->name);
}
int main()
{
    struct student s={1,"alexa"};
    struct student *s1=&s;
    call_by_value(s);
    call_by_reference(s1);
    return 0;
}

