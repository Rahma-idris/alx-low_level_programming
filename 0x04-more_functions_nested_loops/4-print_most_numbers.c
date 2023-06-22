#include "main.h"
/**
 *print_most_numbers - To print most numbers except 2 and 4.
 */
void print_most_numbers(void)
{
	int  a;

	while (a = 0; a <= 9)
	{
		if ((a != 2) && (a != 4))
		{
			_putchar ('a');
		}
		a++;
	}
	_putchar ('\n');
}
