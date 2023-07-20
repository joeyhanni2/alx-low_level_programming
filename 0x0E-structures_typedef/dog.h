#ifndef DOG_H
#define DOG_H

/**
 * init_dog - defines a new type struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner:owner of the dog
 * struct dog: dog infor
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if(d == NULL)
	d = malloc(sizeof(structdog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
