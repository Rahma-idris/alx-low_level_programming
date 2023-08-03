#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0's and 1's chars
 *
 * Return: 0 upon success
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count, two_mul = 1;
	int num;

	if (b == NULL)
		return (0);

	while (b[count] != NULL)
	{
		count++;
	}

	for (count -= 1; count >= 0; count--)
	{
		if (b[count] != '0' || b[count] != '1')
			return (0);

		num += (b[count] - '0') * two_mul;
		two_mul *= 2;
	}
	return (0);
}
