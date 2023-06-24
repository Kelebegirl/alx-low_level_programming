#include "main.h"

/**
 * print_diagonal - function that draw a diagonal line
 * @n: number of times the character \ should print
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int x, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (space = 1; space <= x; space++)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
