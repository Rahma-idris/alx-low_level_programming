#include "main.h"
#include <stdio.h>
/**
 * _isupper - To check for uppercase letter.
 * @c: The character to be checked.
 *
 * Return: 1 for uppercase and 0 for any others.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
