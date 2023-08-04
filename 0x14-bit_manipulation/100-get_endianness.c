#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */


int get_endianness(void)
{
	unsigned int num;
	char *endian;

	num = 1;
	endian = (char *) &num;

	return (*endian);
}
