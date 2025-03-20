#include<stdio.h>
int main()
{
	float weight,height,bmi;
	printf("Enter the weight and height of a person:\n");
	scanf("%f%f",&weight,&height);
	bmi=weight/(height*height);
	if(bmi<18.5)
		printf("Underweight!!\n");
	else if(bmi>18.5 && bmi<24.9)
		printf("Normal weight!!\n");
	else if(bmi>25 && bmi<29.9)
		printf("Overweight!!\n");
	else
		printf("Obese!!\n");
	return 0;
}

