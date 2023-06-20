#include <stdio.h>
/**
 *main: print all lower case alphabets using a function called print_alphabet
 *
 *Return: Always 0 (Success)
 */
char print_alphabet(void)
{
	char1 = 'a';
	while (char1 <= 'z')
	{
		_putchar (char1);
		char1++;
	}
	return (char1);
}
int main(void)
{
	print_alphabet(void);
	_putchar ('\n');
	return (0);
}
