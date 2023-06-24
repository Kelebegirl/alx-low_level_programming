#include "main.h"

/**
 * print_line - function that draw straight  line
 *
 *  @n: number of times  _  character should be printed
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= n; x++)
			_putchar('_');
		_putchar('\n');
	}
}
