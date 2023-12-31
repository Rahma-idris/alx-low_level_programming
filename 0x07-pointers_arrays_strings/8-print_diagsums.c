#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size + 1)];
		/* Increment the diagonal element for sum1*/
		sum2 += a[(i + 1) * (size - 1)];
		/* Increment the diagonal element for sum2*/
	}
	printf("%d, %d\n", sum1, sum2);
}
