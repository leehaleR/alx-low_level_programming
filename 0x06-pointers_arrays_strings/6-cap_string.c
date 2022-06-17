#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: `str`
 */

char *cap_string(char *lee)
{
	int i;

	char seps[] = ",;.!?(){}\n\t\" ";

	while (i = 0, lee[i] !=  '\0')
	{
		if (lee[i] >= 'a' && lee[i] <= 'z')
		{
			if (i == 0)
			{
				lee[i] -= 32;
			}
			if (lee[i - 1] == 32 || lee[i - 1] == seps[i])
			{
				lee[i] -= 32;
			}
		}
		i++;
	}
	return (lee);
}
