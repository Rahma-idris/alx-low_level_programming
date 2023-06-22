#include "main.h"
/*
 *more_numbers - Prints 0 to 14 on multiple lines
 *
 */
void more_numbers(void)
{
	int a = 0;
	int b;

	while (a <= 9)
	{
		b = 0;
		while (b <= 14)
		{
			if (b > 9)
			{
				_putchar ('0' + (b / 10));
			}
			_putchar ('0' + (b % 10));
			b++;
		}
		a++;
		_putchar ('\n');
	}
} 
