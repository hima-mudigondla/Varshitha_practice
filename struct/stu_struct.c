#include <stdio.h>
#include <string.h>
struct student 
{
    char name[30];
    int age;
    char dob[20];
    int marks;
};
union compare 
{
    char name[30];
    int age;
    char dob[20];
    int marks;
};
int main() 
{
    int num, i, x, y;
    printf("Enter the number of students:\n");
    scanf("%d",&num);
    struct student s[num];
    for (i=0;i<num;i++)
    {
        printf("Enter name, age, dob, and marks:\n");
        getchar(); 
        fgets(s[i].name,sizeof(s[i].name),stdin);
        s[i].name[strcspn(s[i].name,"\n")]='\0'; 
	scanf("%d",&s[i].age);
        getchar(); 
        fgets(s[i].dob,sizeof(s[i].dob),stdin);
        s[i].dob[strcspn(s[i].dob,"\n")]='\0'; 
	scanf("%d",&s[i].marks);
    }
    printf("Enter two student indices to compare:\n");
    scanf("%d%d",&x,&y);
    if (x>=num || y>=num) 
    {
	printf("Invalid indices entered!\n");
        return 1;
    }
    union compare c;
    printf("Common attributes between Student %d and Student %d:\n",x+1,y+1);
    int found=0;
    if (strcmp(s[x].name,s[y].name)==0) 
    {
        strcpy(c.name,s[x].name);
        printf("Name: %s\n",c.name);
        found=1;
    }
    if(s[x].age==s[y].age) 
    {
        c.age=s[x].age;
        printf("Age:%d\n",c.age);
        found=1;
    }
    if(strcmp(s[x].dob,s[y].dob)==0) 
    {
        strcpy(c.dob,s[x].dob);
        printf("DOB:%s\n",c.dob);
        found=1;
    }
    if(s[x].marks==s[y].marks) 
    {
        c.marks=s[x].marks;
        printf("Marks:%d\n",c.marks);
        found=1;
    }

    if(!found) 
    {
        printf("No common attributes!\n");
    }

    return 0;
}



