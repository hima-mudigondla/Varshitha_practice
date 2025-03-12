#include<stdio.h>
int main()
{
	float x;
	int choice;
	printf("Enter the choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("celsius to Fahrenheit:\n");
			printf("Enter the temperature in celsius:\n");
			scanf("%f",&x);
			x=(x*9/5)+32;
			printf("Temperature in Fahrenhiet:%f\n",x);
			break;
		case 2:
			printf("Fahrenheit to celsius:\n");
                        printf("Enter the temperature in Fahrenheit:\n");
                        scanf("%f",&x);
                        x=(x-32)*5/9;
                        printf("Temperature in Celsius:%f\n",x);
                        break;
	}
	return 0;
}

