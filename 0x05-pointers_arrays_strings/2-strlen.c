#include "main.h"
/**
 *_strlen - To print the length of a string.
 *
 *@s: string.
 *Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
