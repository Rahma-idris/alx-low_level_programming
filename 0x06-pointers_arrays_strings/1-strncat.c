#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dl = 0, sl = 0;

	while (*(dest + dl) != '\0')
	{
		dl++;
	}

	while (sl < n)
	{
		*(dest + dl) = *(src + sl);
		if (*(src + sl) == '\0')
			break;
		dl++;
		sl++;
	}
	return (dest);
