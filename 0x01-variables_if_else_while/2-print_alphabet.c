#include <stdio.h>
/**
 * main - Print alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char letter = 'a';
	while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
	putchar('\n');
        return(0);
}
