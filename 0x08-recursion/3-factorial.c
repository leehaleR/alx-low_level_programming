#include "main.h"

/**
 * factorial - factorial of a given number
 * @n : integer type
 * Return: factorial of number
 */

int factorial(int n)
{
	if (n <= 0)
		return (-1);
	return (n * factorial(n - 1));
}