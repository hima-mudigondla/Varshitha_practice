#include<stdio.h>
#include<string.h>
int main()
{
        char str[30];
        int sign=1,res=0;
        printf("Enter the string:\n");
        fgets(str,30,stdin);
        str[strcspn(str,"\n")]='\0';
        if((str[0]>='a'&&str[0]<='z')||(str[0]>='A'&&str[0]<='Z')||(str[0]>=32&&str[0]<=44)||(str[0]>=46&&str[0]<=47)||(str[0]>=58&&str[0]<=64)||(str[0]>=91&&str[0]<=96)
        ||(str[0]>=123&&str[0]<=126))
        {
            printf("Cannot be used for atoi conversion\n");
            res=0;
        }
        else
        {
        
         
        
        for(int i=0;i<strlen(str);i++)
        {
                if(str[i]>='0' && str[i]<='9')
                {
                        res=res*10+(str[i] - '0');
                       
                }
                
            
        }
        }
        if(str[0]=='-')
        {
                sign=-1;
        printf("After ATOI function result is:%d\n",sign*res);
        }
        
        else
        {
            sign=1;
           printf("After ATOI function result is:%d\n",sign*res);  
        }
        return 0;
}
