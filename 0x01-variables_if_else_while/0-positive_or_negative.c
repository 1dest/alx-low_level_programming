@@ -1,21 +1,25 @@
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
#include <stdio.h>

int main(void)
	/**
	 * main - Entry point
	 *Return: Always 0 (Success/correct)
	 */

	int main(void)
{

	int n;


	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	return (0);
	int n,
	    srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
