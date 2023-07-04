#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string to be searched
 * @c: character to be located
 *
 * Return: if c is found - NULL
 */

char *_strchr(char *s, char c)
{
	int y;

	for (y = 0; s[y] >= '\0'; y++)
	{
		if (s[y] == c)
			return (s + y);
	}
	return ('\0');
}
