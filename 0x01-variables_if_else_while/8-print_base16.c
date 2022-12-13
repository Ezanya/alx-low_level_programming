#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a[16] = "0123456789abcdef";
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
