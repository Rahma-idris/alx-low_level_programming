#include <stdio.h>
/**
 * main - Print values of a from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	for (a; a < 10; a++)
	{
		putchar ('0' + a);
	}
	putchar ('\n');
	return (0);
}
