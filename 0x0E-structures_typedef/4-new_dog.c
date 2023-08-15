#include "dog.h"
#include <stdlib.h>

int str_length(char *s);
char *str_clone(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * str_length - Computes the length of a string.
 * @s: The string in question.
 *
 * Return: Length of the string.
 */
int str_length(char *s)
{
	int count = 0;

	while (*s++)
		count++;

	return (count);
}

/**
 * str_clone - Duplicates the content of a string into another.
 * @dest: Target buffer.
 * @src: Source string.
 *
 * Return: Pointer to the destination string.
 */
char *str_clone(char *dest, char *src)
{
	int idx = 0;

	while (src[idx])
	{
		dest[idx] = src[idx];
		idx++;
	}

	dest[idx] = '\0';

	return (dest);
}

/**
 * new_dog - Generates a new dog instance.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 *
 * Return: Pointer to the new dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	if (!name || !owner || age < 0)
		return (NULL);

	puppy = malloc(sizeof(dog_t));
	if (!puppy)
		return (NULL);

	puppy->name = malloc(sizeof(char) * (str_length(name) + 1));
	if (!(puppy->name))
	{
		free(puppy);
		return (NULL);
	}

	puppy->owner = malloc(sizeof(char) * (str_length(owner) + 1));
	if (!(puppy->owner))
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}

	str_clone(puppy->name, name);
	puppy->age = age;
	str_clone(puppy->owner, owner);

	return (puppy);
}
