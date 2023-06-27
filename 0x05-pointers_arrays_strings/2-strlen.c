#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: string
 *
 * Return: Length.
 */

int _strlen(char *s)
{
	int leni = 0;

	while (*s != '\0')
	{
		leni++;
		s++;
	}
	return (leni);
}
