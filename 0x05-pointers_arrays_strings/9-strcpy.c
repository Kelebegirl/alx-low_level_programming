#include "main.h"

/**
 * char *_strcpy - function that copies the string printed
 * @dest: copy to
 * @src: copy from
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int c = 0;

	while (*(src + 1) != '\0')
	{
	l++;
	}
	for ( ; c < 1 ; c++)
	{
		dest[c] = src[c];
	}
	dest[1] = '\0';
	return (dest);
}
