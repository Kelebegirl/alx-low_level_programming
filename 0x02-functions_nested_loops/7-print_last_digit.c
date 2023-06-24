#include "main.h"

/**
 * print_last_digit - print last digit of number
 *
 * @x: number input
 * Return: lastDigit
 */

int print_last_digit(int x)
{
	int lastDigit:

		if (x < 0)
			lastDigit = -1 * (x % 10);
		else
			lastDigit = x % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
