#include "main.h"
/**
 * main - print alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		int x = 97;

		while (x < 123)
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
	}
}
