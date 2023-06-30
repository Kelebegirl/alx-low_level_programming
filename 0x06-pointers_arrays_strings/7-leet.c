#include "main.h"

/**
 * leet - encodes a string 1337
 * @n: input value
 *
 * Return: n
 */

char *leet(char *n)
{
	int i, y;
	char s1[] = '';
	char s2[] = '';

	for (i = 0; n[i] != '\0' i++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[i] == s1[y])
			{
				n[i] = s2[y];
			}
		}
	}
	return (n);
}
