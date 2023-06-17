#include <stdio.h>
/**
 * main - Hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexa;

	for (hexa = '0'; hexa <= '9'; hexa++)
	{
		putchar (hexa);
	}
	for (hexa = 'a'; hexa <= 'f'; hexa++)
	{
		putchar (hexa);
	}
	purchar ('\n');
	return (0);
}
