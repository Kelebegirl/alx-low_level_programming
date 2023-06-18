#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (Good)
 */
int main(void)
{
	int n, f;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	f = n % 10;
	if (f > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, f);
	else if (f == 0)
		printf("Last digit of %i is %i and is 0\n", n, f);
	else if (f < 6 && f != 0)
		printf("Last digit of %i is %i and is less than 6 and not  0\n", n, f);
	return (0);
}
