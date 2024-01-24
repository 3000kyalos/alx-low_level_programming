#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: new dog, NULL if failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_doggo;

	new_doggo = malloc(sizeof(dog_t));

	if (new_doggo == NULL)
		return (NULL);
	new_doggo->name = strdup(name);
	new_doggo->age = age;
	new_doggo->owner = strdup(owner);

	if (new_doggo->name == NULL || new_doggo->owner == NULL)
	{
		free(new_doggo->name);
		free(new_doggo->owner);
		free(new_doggo);
		return (NULL);
	}
	return (new_doggo);
}

