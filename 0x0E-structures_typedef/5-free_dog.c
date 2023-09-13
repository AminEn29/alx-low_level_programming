#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - is a function that free dogs
 * @d: is pointer
*/
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
