#include "main.h"

/**
 * puts2 - print other character of a string
 * *str: input
 * Return: print input
 */

void puts2(char *str)
{
	int y;

	for (y = 0; str[y] != '\0'; ++y)
	{
		if (y % 2 == 0)
			_putchar(str[y]);
	}
	_putchar('\n');
}
