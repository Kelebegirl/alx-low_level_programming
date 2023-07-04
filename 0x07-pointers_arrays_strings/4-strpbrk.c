#include "main.h"

/**
 * _strpbrk -  function that searches a string
 * for any of a set of bytes
 * @s:string to be searched
 * @accept: setos bytes to be seached for
 *
 * Return: if no set is matched - NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
				return (s);
		}
		s++;
	}
	return ('\0');
}
