#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Good)
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
