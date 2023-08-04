#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0's and 1's chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int count = 0;
	unsigned int two_mul = 1;
	unsigned int num = 0;

	if (!b)
		return (0);

	while (b[count] != '\0')
	{
		count++;
	}

	for (count -= 1; count >= 0; count--)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);

		num += (b[count] - '0') * two_mul;
		two_mul *= 2;
	}
	return (num);
}
