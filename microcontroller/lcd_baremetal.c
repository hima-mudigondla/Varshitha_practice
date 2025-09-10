#include"stm32f4xx.h"
void lcd_init()
{
	delayMs(20);
	lcd_command(0x38);
	lcd_command(0x0C);
	lcd_command(0x06);
	lcd_command(0x01);
	delayMs(2);
}
void lcd_command(uint8_t cmd)
{
	GPIOB->ODR&=~(1<<0);
	GPIOB->ODR&=~(1<<1);
	GPIOA->ODR=(GPIOA->ODR&0XFFFFFF00)|cmd;
	pulse_enable();
}
void lcd_data(uint8_t data)
{
	GPIOB->ODR&=~(1<<0);
	GPIOB->ODR|=(1<<0);
	GPIOB->ODR&=~(1<<1);
	GPIOA->ODR=(GPIOA->ODR&0XFFFFFF00)|data;
	pulse_enable();
}
void pulse_enable()
{
	GPIOB->ODR|=(1<<2);
	delayMs(1);
	GPIOB->ODR&=~(1<<2);
	delayMs(1);
}
void delayMs(int ms)
{
	for(int i=0;i<(ms*16000);i++)
		__NOP();
}
void gpio_init()
{
	RCC->AHB1ENR|=(1<<0);
	RCC->AHB1ENR|=(1<<1);
	for(int i=0;i<8;i++)
	{
		GPIOA->MODER&=~(3<<(i*2));
		GPIOA->MODER|=(1<<(i*2));
	}
	for(int i=0;i<3;i++)
	{
		GPIOB->MODER&=~(3<<(i*2));
		GPIOB->MODER|=(1<<(i*2));
	}
}
void lcd_string(const char *s)
{
    while(*s)
    {
        lcd_data(*s++);
    }
}
int main()
{
	gpio_init();
	lcd_init();
	lcd_string("Hello");
	lcd_command(0xC0);
	lcd_string("STM32");
	while(1);
}

