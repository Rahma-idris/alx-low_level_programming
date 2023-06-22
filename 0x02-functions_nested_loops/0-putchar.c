#include <unistd.h>
#include "main.h"
/**
 *main - writes _putchar.
 *
 * Return: On success 0.
 *
 */
int main(void)
{
	char text[] = "_putchar\n";

	write(1, text, sizeof(text) - 1);
	return (0);
}
