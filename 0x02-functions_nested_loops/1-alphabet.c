#include <stdio.h>
#include "main.h"
/**
 *main: print all lower case alphabets using a function called print_alphabet
 *
 *Return: Always 0 (Success)
 */
char print_alphabet(void)
{
	char char1 = 'a';
	while (char1 <= 'z')
	{
		putchar (char1);
		char1++;
	}
	return (char1);
}
int main(void)
{
	print_alphabet();
	putchar ('\n');
	return (0);
}
