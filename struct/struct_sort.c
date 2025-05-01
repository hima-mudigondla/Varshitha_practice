#include<stdio.h>
#include<string.h>
struct student
{
        int id;
        char name[30];
        int marks;
};
void id_sort(struct student *s,int n)
{
        struct student temp;
        for(int i=0;i<n-1;i++)
        {
                for(int j=i+1;j<n;j++)
                {
                        if(((s+i)->id)<((s+j)->id))
                        {
                                temp=*(s+i);
                                *(s+i)=*(s+j);
                                *(s+j)=temp;
                        }
                }
        }
}
void name_sort(struct student *s,int n)
{
        struct student temp;
        for(int i=0;i<n-1;i++)
        {
                for(int j=i+1;j<n;j++)
                {
                        if(strcmp((s+i)->name,(s+j)->name)>0)
                        {
                                temp=*(s+i);
                                *(s+i)=*(s+j);
                                *(s+j)=temp;
                        }
                }
        }
}
void marks_sort(struct student *s,int n)
{
        struct student temp;
        for(int i=0;i<n-1;i++)
        {
                for(int j=i+1;j<n;j++)
                {
                        if(((s+i)->marks)<((s+j)->marks))
                        {
                                temp=*(s+i);
                                *(s+i)=*(s+j);
                                *(s+j)=temp;
                        }
                }
        }
}
void display(struct student *s,int n)
{
        for(int i=0;i<n;i++)
        {
                printf("ID:%d\n",(s+i)->id);
                printf("NAME:%s\n",(s+i)->name);
                printf("MARKS:%d\n",(s+i)->marks);
                printf("-----------------------------------------\n");
        }
}
int main()
{
        int n,choice;
        printf("Enter n value:\n");
        scanf("%d",&n);
        struct student stu[n];
        for(int i=0;i<n;i++)
        {
                printf("Enter student id:\n");
                scanf("%d",&stu[i].id);
                printf("Enter student name:\n");
                getchar();
                scanf("%[^\n]",stu[i].name);
                printf("Enter student marks:\n");
                scanf("%d",&stu[i].marks);
        }
        printf("1.Sort by ID\n2.Sort by NAME\n3.Sort by MARKS\n");
        printf("Enter the choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
                case 1:id_sort(stu,n);
                       break;
                case 2:name_sort(stu,n);
                       break;
                case 3:marks_sort(stu,n);
                       break;
                default:
                printf("Enter valid input!!\n");
        }
        printf("STUDENT DETAILS IN SORTED ORDER:\n");
        display(stu,n);
        return 0;
}

                  

