#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Good)
 */

int main(void)
{
	int sum, x;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
			sum += x;
	}
	printf("%i\n", sum);

	return (0);
}
