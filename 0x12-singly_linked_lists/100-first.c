#include <stdio.h>

void __attribute___((constructor)) prequel(void);

/**
 * prequel - a string printed before the main function is executed
 */
void prequel(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
