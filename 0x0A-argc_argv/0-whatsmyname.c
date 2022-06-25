#include "main.h"
#include "stdio.h"

/**
 * main - print name of file argv c
 * @i : integer type
 * @argc : argument type
 * @argv : arguments passed to main as an array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/**
	 * If a function argument is not used
	 */
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
