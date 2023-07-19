#include "dog.h"
#include <stdlib.h>
/**
 *string_length - function to find string length
 *@s: string
 *
 *Return: string length
 */
int string_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *_strcpy - To copy a string
 *@src: source
 *@dest: destination.
 *
 * Return: destination copied to.
 */
char _strcpy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		src[i] = dest[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 *new_dog - function to create a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nDog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	nDog = malloc(sizeof(dog_t));

	if (nDog == NULL)
		return (NULL);

	_strcpy(name, &(nDog->name);
	_strcpy(owner, &(nDog->owner);
	nDog->age = age;
	return (nDog);
}

