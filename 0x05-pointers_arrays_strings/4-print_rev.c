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
	for ((l = i - 1); l >= 0; l--)
    //l= i -1 because after i is decremented, it represents the iteration amount left
	{
		_putchar (s[l]);
	}
	_putchar ('\n');
}
