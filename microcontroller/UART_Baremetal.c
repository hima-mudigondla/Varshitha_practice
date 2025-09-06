#include"stm32f4xx.h"
void UART2_init();
void UART2_Transmit(char *string);
char UART2_Recieve(void);
int main(void)
{
	UART2_init();
	while(1)
	{
		UART2_Transmit("Hello UART!\r\n");
		char recieve=UART2_Recieve();
		char a[]={recieve,'\r','\n','\0'};
		//UART2_Transmit(a);
	}
}
void UART2_init(void)
{
	RCC->APB1ENR|=(1<<17);
	RCC->AHB1ENR|=(1<<0);
	GPIOA->MODER&=~((3<<(2*2))|(3<<(3*2)));
	GPIOA->MODER|=((2<<(2*2))|(2<<(3*2)));
	GPIOA->AFR[0]|=((7<<(4*2))|(7<<(4*3)));
	USART2->BRR=16000000/9600;
	USART2->CR1|=(1<<13)|(1<<3)|(1<<2);
}
void UART2_Transmit(char *string)
{
	while(*string)
	{
		while(!(USART2->SR & 0x80));
		USART2->DR=(*string++ & 0xFF);
	}
}
char UART2_Recieve(void)
{
	while(!(USART2->SR & 0x20));
	return (char)(USART2->DR & 0xFF);
}

