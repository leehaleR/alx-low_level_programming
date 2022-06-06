#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
		printf("%i is positive\n", n)
	if else (n > 0)
		printf("%i is negetive\n", n)
	else
		printf("%i is zero\n", n)
	return (0);

}
