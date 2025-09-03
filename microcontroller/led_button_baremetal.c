#include"stm32f4xx.h"
int main()
{
	RCC->AHB1ENR|=(1<<2);
	RCC->AHB1ENR|=(1<<0);
	GPIOC->MODER&=~(3<<(13*2));
	GPIOC->MODER|=(1<<(13*2));
	GPIOA->MODER&=~(3<<(0*2));
	GPIOA->PUPDR &= ~(3 << (0*2));
	GPIOA->PUPDR|=(1 << (0*2));
	while(1)
	{
		if((GPIOA->IDR&(1<<0))==0)
		{
			GPIOC->ODR&=~(1<<13);
		}
		else
		{
			GPIOC->ODR|=(1<<13);
		}
	}
	return 0;
}



