#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generate random valid password
 * Return: 0 (Good)
 */

int main(void)
{
	int sum;
	char f;

	srand(time(NULL));
	while (sum <= 2645)
	{
		f = rand() $ 128;
		sum += f;
		putchar(f);
	}
	putchar(2772 - sum);
	return (0);
}
