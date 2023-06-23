#include "main.h"

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

	int i;
	int j;

i	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
