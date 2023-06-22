#include "main.h"
/**
 *_isupper - To check for uppercase letter.
 *
 *Return: 0 for uppercase and 1 for any others.
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
