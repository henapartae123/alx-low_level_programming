#ifndef _dog_h_
#define _dog_h_
/**
 * struct dog - structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
doggo;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

doggo *new_dog(char *name, float age, char *owner);

void free_dog(doggo *d);

#endif /* _dog_h_ */
