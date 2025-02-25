#include<stdio.h>
void binary_num(int num);
int main()
{
	int num,bit_manip,choice;
	printf("Enter the type of Manipulation:\n");
	printf("1.set_bit\n2.clear_bit\n3.toggle_bit\n");
	scanf("%d",&choice);
	printf("Enter the number to be manipulated:\n");
	scanf("%d",&num);
	binary_num(num);
	printf("Enter the bit position to be manipulated:\n");
	scanf("%d",&bit_manip);
	switch(choice)
	{
		case 1:
			{
			num|=(1<<bit_manip);
			printf("The set_bit value is:%d\n",num);
			binary_num(num);
			break;
			}
		case 2:
			{
			num&=~(1<<bit_manip);
			printf("The clear_bit value is:%d\n",num);
			binary_num(num);
			break;
			}
		case 3:
			{
			num^=(1<<bit_manip);
			printf("The toggle_bit value is:%d\n",num); 
			binary_num(num);
			break;
			}

	}
}
void binary_num(int num)
{
	int base=1,res=0,rem,one=0,zero=0;
        while(num>0)
        {
                rem=num%2;
                res+=base*rem;
                base*=10;
                num/=2;
        }
        printf("The result in binary:%d\n",res);
	while(res>0)
	{
		rem=res%10;
		if(rem==0)
			zero++;
		else
			one++;
		res/=10;
	}
	printf("The number of zeroes:%d\n",zero);
	printf("The number of ones:%d\n",one);

}


			








