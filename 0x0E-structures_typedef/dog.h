#ifndef _DOG_
#define _DOG_
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
/**
 * struct dog - struct for storing dog information
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: dog struct stores its name, age, and owner details
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
