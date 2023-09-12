#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog ownwer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));
if (d == NULL)
d->name = name;
d->age = age;
d->owner = owner;
}
