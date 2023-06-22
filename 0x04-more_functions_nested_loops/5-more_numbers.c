#include "main.h"
/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
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
