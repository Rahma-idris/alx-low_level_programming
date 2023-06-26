#include "main.h"
/**
 *_puts - To print a string to stdout.
 *
 *@str: string.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n')
}
