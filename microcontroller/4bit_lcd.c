#include"stm32f4xx.h"
void lcd_init();
void lcd_command(uint8_t cmd);
void lcd_data(uint8_t data);
void send_nibble(uint8_t nibble);
void pulse_enable();
void gpio_init();
void delayMs(int ms);
void lcd_string(const char *s);
void lcd_init()
{
	delayMs(20);
	send_nibble(0x03);
	delayMs(5);
	send_nibble(0x03);
	delayMs(1);
	send_nibble(0x03);
	delayMs(1);
	send_nibble(0x02);
	lcd_command(0x28);
	lcd_command(0x0C);
	lcd_command(0x06);
	lcd_command(0x01);
	lcd_command(0x1C);
	delayMs(2);
}
void lcd_command(uint8_t cmd)
{
	GPIOB->ODR&=~(1<<0);
	GPIOB->ODR&=~(1<<1);
	send_nibble(cmd>>4);
	send_nibble(cmd&0x0F);
	delayMs(2);
}
void lcd_data(uint8_t data)
{
	GPIOB->ODR&=~(1<<0);
	GPIOB->ODR|=(1<<0);
	GPIOB->ODR&=~(1<<1);
	send_nibble(data>>4);
	send_nibble(data&0x0F);
	delayMs(2);
}
void send_nibble(uint8_t nibble)
{
	  GPIOA->ODR &= ~(0xF << 4);
	  GPIOA->ODR |= (nibble & 0x0F) << 4;
	  pulse_enable();
}
void pulse_enable()
{
	GPIOB->ODR|=(1<<2);
	delayMs(1);
	GPIOB->ODR&=~(1<<2);
	delayMs(1);
}
void gpio_init()
{
	RCC->AHB1ENR|=((1<<0)|(1<<1));
	for(int i=4;i<8;i++)
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
void delayMs(int ms)
{
	for(int i=0;i<(ms*16000);i++)
		__NOP();
}
int main(void)
{
	gpio_init();
	lcd_init();
	lcd_string("HIMA VARSHITHA");
	lcd_command(0xC0);
	lcd_string("MUDIGONDLA");
	while(1);
}

