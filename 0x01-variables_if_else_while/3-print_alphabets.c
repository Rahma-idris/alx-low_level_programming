#include <stdio.h>
/**
 * main - Print alphabets in lowercase and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char lower;
	char upper;
        for (lower = 'a'; lower <= 'z'; lower++)
        {
                putchar (lower);
        }
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar (upper);
	}
        putchar('\n');
        return (0);
}
