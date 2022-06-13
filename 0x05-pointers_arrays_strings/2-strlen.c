#include "main.h"

/**
 * _strlen - eturns the length of a string
 * @s: takes the value of a string.
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	;
	return (i);
}
