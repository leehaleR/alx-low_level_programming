#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: `str`
 */



char *cap_string(char *str)

{

	int i, c;

	int lee;

	char nots[] = ",;.!?(){}\n\t\" ";

	for (i = 0, lee = 0; str[i] != '\0'; i++)
	{

		if (str[0] > 96 && str[0] < 123)

			lee = 1;
		for (c = 0; nots[c] != '\0'; c++)
		{
			if (nots[c] == str[i])
				lee = 1;
		}

		if (lee)
		{

			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				lee = 0;

			}

			else if (str[i] > 64 && str[i] < 91)
				lee = 0;
			else if (str[i] > 47 && str[i] < 58)
				lee = 0;
		}
	}

	return (str);
}
