#include <stdio.h>
/**
 * main - Print all letters in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	while (letter <= 'z'; letter++)
	{if (letter != 'e''q')
		{
			putchar (letter);
		}
		return(0);
}
