#include"stm32f4xx.h"
volatile uint8_t button_pressed=0;
void EXTI0_IRQHandler()
{
	if(EXTI->PR & (1<<0))
	{
		EXTI->PR|=(1<<0);
		if(GPIOA->IDR & (1<<0))
			button_pressed=0;
		else
			button_pressed=1;
	}
}
void delay(volatile uint32_t delay)
{
	while(delay--) __asm__("nop");
}

int main()
{
	RCC->AHB1ENR|=(1<<0);
	RCC->AHB1ENR|=(1<<2);
	RCC->APB2ENR|=(1<<14);
	GPIOA->MODER&=~(3<<(0*2));
	GPIOC->MODER&=~(3<<(13*2));
	GPIOC->MODER|=(1<<(13*2));
	GPIOC->ODR|=(1<<13);
	GPIOA->PUPDR&=~(3<<(0*2));
	GPIOA->PUPDR|=(1<<(0*2));
	SYSCFG->EXTICR[0]&=~(0XF<<0);
	SYSCFG->EXTICR[0]|=(0X0<<0);
	EXTI->IMR|=(1<<0);
	EXTI->FTSR|=(1<<0);
	EXTI->RTSR|=(1<<0);
	NVIC->ISER[0]|=(1<<6);
	while(1)
	{
		if(button_pressed==0)
		{
			GPIOC->ODR^=(1<<13);
			delay(2000000);
		}
		else
		{
			if(GPIOC->ODR&(1<<13))
			{
				GPIOC->ODR|=(1<<13);
			}
			else
			{
				GPIOC->ODR&=~(1<<13);
			}
		}
	}
}

