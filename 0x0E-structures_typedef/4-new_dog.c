#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *cpname, *cpowner;

	newdog = malloc(sizeof(dog_t));
	if (!newdog)
		return (NULL);

	cpname = strdup(name);
	if (!cpname)
	{
		free(newdog);
		return (NULL);
	}
	cpowner = strdup(owner);
	if (!cpowner)
	{
		free(cpname);
		free(newdog);
		return (NULL);
	}

	newdog->name = cpname;
	newdog->age = age;
	newdog->owner = cpowner;

	return (newdog);
}

