#include "main.h"

/**
 * puts2 - print other character of a string
 * *str: input string character
 * Return: print input
 */

void puts2(char *str)
{
	int y;

	for (y = 0; str[y] != '\0'; ++y)
	{
		if (y % 2 == 0)
			putchar(str[y]);
	}
	putchar('\n');
}
