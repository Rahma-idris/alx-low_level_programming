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
	/*i reps string length*/

	while (s[i] != 0)
	{
		i++;
	}
	for ((l = i - 1); l >=0; l--)
	{
		_putchar (s[l]);
	}
	_putchar ('\n');
}
