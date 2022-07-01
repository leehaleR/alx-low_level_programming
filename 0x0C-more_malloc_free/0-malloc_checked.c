#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *malloc_checked - A function that allocates memory using malloc
 *@b: a variable that holds the input
 *Return: The address is returned.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
