#include "main.h"

/**
 * more_numbers - prints 10 times the number
 *
 * Return: Always 0 (Good).
 */

void more_numbers(void)
{
	int num, x, y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			num = y;
			if (y > 9)
			{
				_putchar(1 + 48);
				num = y % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
