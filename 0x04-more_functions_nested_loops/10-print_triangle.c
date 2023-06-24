#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of a triangle
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int x, y;

	int _putchar(char);

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				if ((x + y) <= size)
					_putchar(" ");
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
