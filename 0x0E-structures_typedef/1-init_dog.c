#include <string.h>
#include "dog.h"

/**
 * init_dog - intializes a variable of type struct dog
 * @d: pointer to the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL && name != NULL && owner != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
