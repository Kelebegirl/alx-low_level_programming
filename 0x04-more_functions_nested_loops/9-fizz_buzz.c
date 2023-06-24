#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers 1-100, followed by new line
 * multiples of 3 print Fizz
 * multiples of 5 print Buzz
 * multiples of both 3 and 5 print FizzBuzz
 *
 * Return: Always 0.
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && !(x % 5 == 0))
			printf("Fizz");
		else if (x % 5 == 0 && !(x % 3 == 0))
			printf("Buzz");
		else if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", x);

		if (x != 100)
			printf(" ");
		else
			printf("\n");
	}
}