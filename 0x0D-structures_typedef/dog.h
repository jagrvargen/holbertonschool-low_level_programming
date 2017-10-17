#ifndef DOG
#define DOG

/**
 * struct dog - A struct with two pointers to char and a float.
 * @name: A pointer to char
 * @age: A floating point integer
 * @owner: A pointer to char
 *
 * Description: A struct type which contains information about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
