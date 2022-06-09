#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * positive_or_negative - gives the correct output when given a case of 0
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
void positive_or_negative(int n)
{

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

}
