#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *_calloc - A function that allocates memory for an array
 *@nmemb: memory allocation for the number of elements of the array
 *@size: the number of bytes within each element
 *Return: The memory allocation.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc (nmemb * size);
	if (block != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			block[i] = 0;
		return (block);
	}
	else
		return (NULL);
}
