#include "main.h"

/**
 * swap_int - function that swaps the values of two integer
 *
 * @a: swap integer
 * @b: swap integer
 *
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
