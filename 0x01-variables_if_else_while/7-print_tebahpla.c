#include <stdio.h>
/**
 * main - From z to a in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'z';

	for (letter = 'z', letter >= 'a'; letter--)
	{
		putchar (letter);
	}
	putchar ('\n');
	return (0);
}
