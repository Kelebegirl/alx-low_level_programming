#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Good)
 */

int main(void)
{
	char f = 'a';

		while (f <= 'z')
		{
			if (f == 'e' || f == 'q')
				f++;
			putchar(f);
			f++;
		}
	putchar('\n');
	return (0);
}
