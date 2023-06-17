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
	int n,a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	a = n%10;
	printf("Last digit of %d is\n", n);
	if (a > 5)
	{
		printf("%d and is greater than 5\n", a);
	}
	else if (a == 0)
	{
		printf("%d is 0\n", a);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", a);
	}
	return (0);
}
