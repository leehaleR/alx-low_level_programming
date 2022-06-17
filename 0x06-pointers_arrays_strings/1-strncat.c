#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, a;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (a = 0; src[a] != '\0' && n > 0;)
	{
		dest[i] = src[a];
		a++;
		n--;
		i++;
	}
	return (dest);
}
