#include "main.h"
/**
 * _isalpha - check for alphabetic charachter
 * @c: character
 * Return: 1 is letter found otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
