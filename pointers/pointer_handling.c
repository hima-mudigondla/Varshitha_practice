#include<stdio.h>
int main()
{
	int *ab,m;
	printf("Enter the value of m\n");
	scanf("%d",&m);
	printf("Address of m:%p\n",&m);
	printf("Address of *ab:%p\n",ab);
	ab=&m;
	printf("Value of *ab:%d\n",*ab);
	printf("Address of *ab:%p\n",ab);
	*ab=90;
	printf("Address of m:%p\n",&m);
	printf("value of m:%d\n",m);
	return 0;
}
