#include "main.h"

/**
 * _puts - function that print a string
 *
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	_putchar('\n');
}
