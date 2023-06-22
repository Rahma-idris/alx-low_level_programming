#include "main.h"

/**
 *print_diagonal - To print a diagonal line.
 *@n: number of times a slash can be drawn.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
		return;
	}
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			if (b == 0)
			{
				_putchar ('\\');
			}
			else
			{
				_putchar (' ');
			}
		}
		_putchar ('\\');
		_putchar ('\n');
	}
}
