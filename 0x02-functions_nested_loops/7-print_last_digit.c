#include "main.h"

/**
 * print_last_digit - print last digit of number
 *
 * @x: number input
 * Return: lastdigit
 */

int print_last_digit(int x)
{
	int lastdigit:

		if (x < 0)
			lastdigit = -1 * (x % 10);
		else
			lastdigit = x % 10;
	_putchar(lastdigit + '0');
	return (x);
}
