#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to function
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < (n - 1))
			if (separator != NULL)
				printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}

