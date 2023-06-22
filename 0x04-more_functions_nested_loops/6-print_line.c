#include "main.h"

/**
 *print_line - To print a straight line.
 *@n: integer to count number of lines.
 * Return: no return
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar ('_');
			n--;
		}
	}
	_putchar ('\n');
}
