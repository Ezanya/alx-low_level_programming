#include "main.h"
/**
 * _islower - check if the character is lower case
 * return - 0 for capital and 1 for lower case
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

