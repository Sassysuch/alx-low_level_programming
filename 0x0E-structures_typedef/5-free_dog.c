#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - This function frees the dogs..
 * @d: Pointer
 * Return: None.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
