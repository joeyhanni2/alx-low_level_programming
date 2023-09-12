#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -  function that frees dogs.
 * @d: pointer to struct
  * Return: returns free dog!
  */
void free_dog(dog_t *d)
{
if (d)
{
free(d->owner);
free(d->name);
free(d);
}
}
