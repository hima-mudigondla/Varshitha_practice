#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("test.txt","w");
	 if (fptr == NULL)
   	 {
        	perror("Error opening file");
    	 }
   	 else
    	 {
		char a[]="hello";
		fprintf(fptr,"%s\n",a);
        	printf("File opened successfully!\n");
     
    	 }
	 return 0;
}

