#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - A function that allocates memory using malloc
 *@b: a variable that holds the input
 *Return: The address is returned.
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}
