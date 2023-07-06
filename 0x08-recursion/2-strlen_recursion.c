#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be measured
 *
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}
	return (x);
}
