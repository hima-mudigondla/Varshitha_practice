#include"stm32f4xx.h"
void delay(volatile int delay)
{
	while(delay--) __asm("nop");
}
int main()
{
	RCC->AHB1ENR|=(1<<2);
	GPIOC->MODER&=~(3<<(13*2));
	GPIOC->MODER|=(1<<(13*2));
	while(1)
	{
		GPIOC->ODR&=~(1<<13);
		delay(5000000);
		GPIOC->ODR|=(1<<13);
		delay(5000000);
	}
	return 0;
}
