#include "main.h"

/**
 * _isupper -function to checks for uppercase character.
 *
 *@c: input for alphabet
 * Return: Always 1 if c is uppercase, o if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
