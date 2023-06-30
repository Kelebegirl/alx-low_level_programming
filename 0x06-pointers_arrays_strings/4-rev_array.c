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
	int i;
	int y;

	for (i = 0; < n--; i++)
	{
		y = a[i];
		a[i] = a[n];
		a[n] = y;
	}
}
