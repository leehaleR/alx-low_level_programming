#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @o: string
 * Return: o
 */

char *string_toupper(char *o)
{
	int i;

	for (i = 0; o[i] != '\0'; i++)
	{
		if (o[i] > 96 && o[i] < 123)
		{
			o[i] -= 32;
		}
	}
	return (o);
}
