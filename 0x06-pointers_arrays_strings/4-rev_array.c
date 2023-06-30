#include "main.h"

/**
 * reverse_array - function that compares two string
 * @a: array
 * @n: element of array
 *
 * Return: 0 (Good)
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
