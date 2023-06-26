#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int y = n;

	/*check if its negative*/
	if (n < 0)
	{
		_putchar('-');
		y = -y;
	}
	/*print first two digits*/
	if ((y / 10) > 0)
		print_number(y / 10);

	/*print the last digits*/
	_putchar((y % 10) + 48);
}

