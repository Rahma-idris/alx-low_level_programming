#include "main.h"
/**
 *main: print all lower case alphabets using a function called print_alphabet
 *
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char char1 = 'a';
	for (char1 <= 'z')
	{
		_putchar (char1);
		char1++;
	}
	return (char1);
}
int main(void)
{
	print_alphabet();
	_putchar ('\n');
	return (0);
}
