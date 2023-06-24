#include "main.h"

/**
 * print_diagonal - function that draw a diagonal line
 * @n: number of times the character \ should print
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int love, care;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (love = 1; love <= n; love++)
		{
			for (care = 1; care <= love; care++)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
