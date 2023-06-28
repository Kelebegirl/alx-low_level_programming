#include "main.h"

/**
 * print_array - function that print elements of an array of integer
 * @a: array name
 * @n: number of array element
 *
 * Return: a and n input
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != (n - 1))
			printf("%i, ", a[x]);
		else
			printf("%i", a[x]);
	}
	printf("\n");
}
