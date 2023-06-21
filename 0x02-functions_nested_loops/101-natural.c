#include <stdio.h>
/**
 *main - To print sum of  modulus 3 and 5 below 1024
 *
 *Return: Always 0
 */
int main(void)
{
	int i;
	int sum;
	for (i = 0; i < 1024; i++)
	{
		sum = 0;
		if ((i % 3 = 0) || (i % 5 = 0))
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
