#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** main - To assess a as a remainder
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int a;
	a = n%10;
	printf("Last digit of %d is");
	if (a > 5)
	{
		printf("and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("is 0\n", n, a);
	}
	else
	{
		printf("and is less than 6 and not 0\n", n, a);
	}
	return (0);
}
