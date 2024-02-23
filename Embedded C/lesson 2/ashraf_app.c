#include "uart.h"
unsigned char string_buffer[100]="learn-in-depth:<ashraf>";
void main (void)
{
	Uart_Send_string(string_buffer);
} 