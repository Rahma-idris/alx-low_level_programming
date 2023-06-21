#include "main.h"
/**
 *print_last_digit - Prints last digitnof integer n.
 *
 *@n: input valie of integer.
 *
 *Return: last digit of integer.
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (n >= 0)
	{
		_putchar ('0' + a);
		return (a);
	}
	else
	{
		break;
	}
}
