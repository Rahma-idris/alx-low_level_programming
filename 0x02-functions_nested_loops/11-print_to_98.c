#include <stdio.h>
/**
 *print_to_98 - Printing the integer n to 98 and back.
 *
 *@n: integer to be counted.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
	}
	printf("98\n");
}
