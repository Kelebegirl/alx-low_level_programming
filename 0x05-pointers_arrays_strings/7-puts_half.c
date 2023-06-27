#include "main.h"

/**
 * puts_half - print half of a string
 * @*str: input string
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
