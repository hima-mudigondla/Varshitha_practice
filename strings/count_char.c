#include<stdio.h>
int main()
{
	char str[50];
	int dig=0,alph=0,spe_sy=0;
	printf("Enter the sring:\n");
	fgets(str,50,stdin);
	for(int i=0;str[i]!='\0';i++)
	{
		if((str[i]>=32 && str[i]<=47)||(str[i]>=58 && str[i]<=64)||(str[i]>=91 && str[i]<=96)||(str[i]>=123 && str[i]<=126))
			spe_sy++;
		else if(str[i]>=48 && str[i]<=57)
			dig++;
		else if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))
			alph++;
	}
	printf("Number of digits present in given string:%d\n",dig);
	printf("Number of alphabets present in given string:%d\n",alph);
	printf("Number of special symbols present in given string:%d\n",spe_sy);
	return 0;
}



