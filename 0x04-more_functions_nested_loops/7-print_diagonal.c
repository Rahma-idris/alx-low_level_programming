#include "main.h"
#include <stdio.h>
/**
 *print_diagonal - To print a diagonal line.
 *@n: number of times a slash can be drawn.
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar ('\n');
		return;
	}
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar (' ');
		}
		_putchar ('\\');
		_putchar ('\n');
	}
}
