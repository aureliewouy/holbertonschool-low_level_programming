#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Short description
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
