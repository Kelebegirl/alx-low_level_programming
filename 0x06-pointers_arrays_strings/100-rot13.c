#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to string
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int y;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

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
	return (s);
}
