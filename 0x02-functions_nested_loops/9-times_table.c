#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * E.g Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 */

void times_table(void)
{
	int num, x, y;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (x = 1; x <= 9; x++)
		{
			_putchar(',');
			_putchar(' ');

			y = num * x;

			/**
			 * put space if y is a single number
			 * place the first digit of its 2 number
			 */
			if (y <= 9)
				_putchar(' ');
			else
				_putchar((y / 10) + 48); /*the first digit*/

			_putchar((y % 10) + 48); /*the second  digit*/
		}
		_putchar('\n');
	}
}
