#include<stdio.h>
void prime(int a)
{ 
	int count=0;
     	for(int i=1;i<a;i++)
    	{
   	     if(a%i==0)
        	count++;
    	}
    	if(count==1)
   	{
       		printf("Number is prime!!\n");
   	 }
    	else
   	{
        	printf("Number is not prime!!\n");
    	}
}	
