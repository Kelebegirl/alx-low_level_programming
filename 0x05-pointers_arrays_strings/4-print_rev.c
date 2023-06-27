#include "main.h"

/**
 * print_rev - function yhat prints a string in reverse
 * @s: string
 *
 * Return: Always 0 (Good)
 */

void print_rev(char *s)
{
	int k = 0;

	while (s[k])
	{
		k++;
	}

	while (k--)
	{
		putchar(s[k]);
	}
	putchar('\n');
}
