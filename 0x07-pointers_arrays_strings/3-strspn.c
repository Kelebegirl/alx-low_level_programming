#include "main.h"

/**
 *  _strspn -  function that gets the length
 *  of a prefix substring
 *  @s: string to be searched
 *  @accept: prefix to be measured
 *
 * Return: number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				bytes++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
