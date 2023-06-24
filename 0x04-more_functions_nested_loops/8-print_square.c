#include "main.h"

/**
 * print_square - print a square
 *
 * @size: size of a square
 *
 * Return: Always 0.
 */

void print_square(int size)
{
	int row, column;

	for (row = 1; <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}