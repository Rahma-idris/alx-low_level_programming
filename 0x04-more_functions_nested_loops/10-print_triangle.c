#include "holberton.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar ('\n');
		return;
	}

	int i, j;

	for (i = 0; i <= size; i++)
	{
		for (j = 1; j <= i); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
