#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: pointer to the bit
 * @index: index to the bit
 *
 * Return: 1 on success, otherwise, -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;
	/*m = mask*/

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
