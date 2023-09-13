#include "dog.h"
/**
 * init_dog- is function for insialise the parametre of the functiont
 * @d:input pointer
 * @name:name of the dog
 * @age:the age
 * @owner: the owneer
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
}
