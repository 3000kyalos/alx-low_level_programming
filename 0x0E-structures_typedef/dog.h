#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure with elements name, age, owner
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Description: struct for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
