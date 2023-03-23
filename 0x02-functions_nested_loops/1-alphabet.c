#include "main.h"
/**
* main - entry point
* return: always 0
*/
void print_alphabet(void)
{
	int x = 97;
	while (x < 123)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
