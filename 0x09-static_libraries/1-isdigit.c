#include "main.h"

/**
 *_isdigit - To check if c is a digit.
 *@c: digit to be checked.
 *Return: it returns 1 if c is a diigit and zero if it's not.
 *
 */
int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
