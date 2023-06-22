#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Good)
 */

int main(void)
{
	int count;

	unsigned long fib num1 = 0, fib num2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib num1 + fib num2;
		printf("%lu", sum);

		if (count == 49)
			printf('\n');
		else
			printf(' ');
	}
	return (0);
}
