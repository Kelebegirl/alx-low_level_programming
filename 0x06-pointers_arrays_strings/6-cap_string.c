#include "main.h"

/**
 * cap_string -  capitalizes all words of a string
 * @str: string to be capitalized
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int u = 0;

	while (str[u])
	{
		while (!(str[u] >= 'a' && str[u] <= 'z'))
			u++;
		if (str[u - 1] == ' ' ||
				str[u - 1] == '\t' ||
				str[u - 1] == '\n' ||
				str[u - 1] == ',' ||
				str[u - 1] == ';' ||
				str[u - 1] == '.' ||
				str[u - 1] == '!' ||
				str[u - 1] == '?' ||
				str[u - 1] == '=' ||
				str[u - 1] == '(' ||
				str[u - 1] == ')' ||
				str[u - 1] == '{' ||
				str[u - 1] == '}' ||
				u == 0)
			str[u] -= 32;
		u++;
	}
	return (str);
}
