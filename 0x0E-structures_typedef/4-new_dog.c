#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new dog
  * @name: name of dog
  * @age: dog age
  * @owner: owner of the dog
  * Return: NULL if the function fails
  */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

if (newDog == NULL)
{
return (NULL);
newDog->name = (name);
newDog->owner = (owner);
if (newDog->name == NULL || newDog->owner == NULL)
{
free(newDog->name);
free(newDog->owner);
free(newDog);
return (NULL);
}
newDog->age = age;
}
return (newDog);
}
