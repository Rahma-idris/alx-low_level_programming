#include "dog.h"
#include <stdio.h>
/**
 *print_dog - Abfunction that prints struct dog when d > 0
 *@d: struct dog
 *
 *Return: no return
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
