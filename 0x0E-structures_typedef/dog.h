#ifndef DOG_H
#define DOG_H
/**
 * struct dog - fuction
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Description: this struct is for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef of struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*DOG_H*/
