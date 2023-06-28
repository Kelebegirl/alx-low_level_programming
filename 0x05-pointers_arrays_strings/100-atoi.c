#include "main.h"

/**
 *  _atoi - function that convert a string to integer
 * @s: string input parameter
 * Return: Always 0.
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int g = 1;

	do {
		if (*s == '-')
			g *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num + 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num + g);
}
