#include "main.h"
/**
 *print_rev - to print string in reverse
 *
 *@s: string.
 *
 */
void print_rev(char *s)
{
	int i = 0;
	int l;

	while (*s != 0)
	{
		l++;
	}
	for (l = 0; (l = i - 1); l--)
	{
		_putchar (s[l]);
	}
	_putchar ('\n');
}
