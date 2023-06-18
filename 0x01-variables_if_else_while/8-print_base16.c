#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (Good)
 */

int main(void)
{
	int x = 48; /*48; decimal representation of 0*/

	while (x <= 102) /*102 decimal representation of f*/
	{
		putchar(x);

		/*after 9 the next is 96; '*/
		if (x == 57)
			x += 39;
		x++;
	}
	putchar('\n');
	return (0);
}
