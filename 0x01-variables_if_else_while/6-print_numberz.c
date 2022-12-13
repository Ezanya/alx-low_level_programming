#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a[10] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
