#include "dog.h"
#include <stdio.h>

/**
 * print_dog - initializes a dog struct
 * @d: structure pointer
 *
 *
 * Description: prints the dog content
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf('Name: {d->name}');
		else
			printf('Name: (nil)');
		if (d->age!= NULL)
			printf('Name: {d->age}');
		else
			printf('Age: (nil)');
		if (d->owner != NULL)
			printf('Owner: {d->owner}');
		else
			printf('Age: (nil)');
	}
	else
	printf('(nil)');
}
