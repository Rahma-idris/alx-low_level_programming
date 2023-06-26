#include "main.h"
/**
 *swap_int - To swap the numbers of a and b.
 *
 *@a: integer a.
 *@b: integer b.
 *Return: no return.
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
