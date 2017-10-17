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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif
