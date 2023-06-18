#include <stdio.h>

/**
 * main - enty point
 * Return: 0 (Good)
 */

int main(void)
{
	char f = 'z';

	while (f >= 'a')
	{
		putchar(f);
		f--;
	}
	putchar('\n');
	return (0);
}
