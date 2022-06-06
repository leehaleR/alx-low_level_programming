#include <stdlib.h>
#include <time.h>

/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - main block
 * Description: assign a random number to the variable n
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)

{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
		printf("%i is positive\n", n);
	if else (n > 0)
		printf("%i is negetive\n", n);
	else
		printf("%i is zero\n", n);
	return (0);

}
