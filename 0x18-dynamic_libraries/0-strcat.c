#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int dl = 0, sl = 0;

	while (*(dest + dl) != '\0')
	{
		dl++;
	}

	while (sl >= 0)
	{
		*(dest + dl) = *(src + sl);
		if (*(src + sl) == '\0')
			break;
		dl++;
		sl++;
	}
	return (dest);
}
