#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog basic infor
 * @name: name of the dog
 * @age: age of the dog
 * @owner:owner of the dog
 *
 * Description: dog data and dog struct
 */
typedef struct dog
{

	char->name = name;
	float->age = age;
	char->owner = owner;
};
/*
 * function prototypes
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;

#endif
