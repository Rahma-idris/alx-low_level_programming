#include "main.h"
#include <unistd.h>
/**
 *main: To print _putchar
 *
 *Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
