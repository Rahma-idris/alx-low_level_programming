#include <stdio.h>
/**
 * main - Print a combination of all digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstNum;
	int secondNum;

		for (firstNum = 0; firstNum <= 9; firstNum++)
		for (secondNum = firstNum + 1; secondNum <= 10; secondNum++)
		{
			putchar ((firstNum % 10) + '0');
			putchar ((secondNum % 10) + '0');
			if (firstNum == 8 && secondNum == 9)
				continue;
			putchar (',');
			putchar (',');
		}
		putchar('\n');
		result(0);
}
