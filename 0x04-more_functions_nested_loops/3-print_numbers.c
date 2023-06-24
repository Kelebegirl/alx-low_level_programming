#include "main.h"

/**
 * print_numbers - functions that prints number 0-9,
 * using _putchar twice
 *
 * Return: 0 (Good)
 */

void print_numbers(void)
{
	int x = 0;

	do {
		_putchar(x + 48);
		x++;
	} while (x >= 0 && x <= 9);
	_putchar('\n');
}
