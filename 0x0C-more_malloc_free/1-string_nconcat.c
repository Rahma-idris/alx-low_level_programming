#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; j <= n && s2[j] = '\0'; j++)
		;
	s3 = malloc(char *) (sizeof(char) * i + j + 1));
	if (s3 == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		s3[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		s3[i + k] = s2[k];
	}
	s3[i + j] = '\0';
	return (s3);
}
