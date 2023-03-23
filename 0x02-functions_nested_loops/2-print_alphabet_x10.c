#include "main.h"
/**
 * main - print alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int x = 97;
	
	for (i=0; i<10; i++)
	{
		while (x < 123)
		{
			_putchar(x);
			x++;
		}
	}
}
