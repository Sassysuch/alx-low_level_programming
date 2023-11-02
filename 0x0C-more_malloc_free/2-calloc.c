#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc -  This function allocates memory for an array, using malloc
 *
 * @nmemb: length to allocate in the memory
 * @size: size of casting to save
 *
 * Return: Pointer to the allocated memory.
 *         If nmemb or size is 0, then _calloc returns NULL
 *         If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a, b;
	char *call;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = (nmemb * size);
	call = malloc(b);
	if (call == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		call[a] = 0;
	}
	return (call);
}
