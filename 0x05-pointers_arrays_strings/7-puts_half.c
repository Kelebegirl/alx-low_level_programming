#include "main.h"

/**
 * puts_half - print half of a string
 * @*str: string parameter input
 *
 * Description: print the last character of the n
 * string n = (length_of_the_string - 1) / 2
 */

void puts_half(char *str)
{
	int u;

	for (u = 0; str[u] != '\0'; u++)
		;

	u++;
	for (u /= 2; str[u] != '\0'; u++)
	{
		putchar(str[u]);
	}
	putchar('\n');
}
