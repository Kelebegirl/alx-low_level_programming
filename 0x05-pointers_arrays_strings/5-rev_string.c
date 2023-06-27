#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverse a string
 *@s: string

 * Return: string in revere.
 */

void rev_string(char *s)
{
	int x;
	int temp = 0;
	char rev = s[0];

	while (s[temp] != '\0')
		temp++;
	for (x = 0; x < temp; x++)
	{
		temp--;
		rev = s[x];
		s[x] = s[temp];
		s[temp] = rev;
	}
}
