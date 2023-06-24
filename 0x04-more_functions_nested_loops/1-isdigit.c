#include "main.h"

/**
 * _isdigit -function to checks for a digit between 0-9.
 *
 *@c: input for digit
 * Return: Always 1 if digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
