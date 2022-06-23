#include "main.h"

/**
 * _print_rev_recursion - string in reverse
 * @s : String Type
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

