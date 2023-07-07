#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	int result;

	if (*s != '\0')
	{
		return (0);
	}
	else
	{
		result = 1 + _strlen_recursion(s + 1);
		return (result);
	}
}
