#include <stdio.h>
/**
 * main - Print 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar ('0' + a);
	}
	putchar ('\n');
	return (0);
}
