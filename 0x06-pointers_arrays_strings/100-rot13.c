#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to string
 *
 * Return: *p
 */

char *rot13(char *s)
{
	int y;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = s;

	while (*s)
	{
		for (y = 0; y <= 52; y++)
		{
			if (*s == rot13[y])
			{
				*s = ROT13[y];
				break;
			}
		}
		s++;
	}
	return (p);
}
