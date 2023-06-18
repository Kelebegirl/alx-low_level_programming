#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (Good)
 */

int main(void)
{
	int g = 0;

	while (g <= 9)
	{
		putchar(g + 48);

		if (g != 9)
		{
			putchar(',');
			putchar(' ');
		}
		g++;
	}
	putchar('\n');
	return (0);
}
