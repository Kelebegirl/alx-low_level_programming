#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (Good)
 */

int main(void)
{
	int x = 0, f;

	while (x <= 9)
	{
		f = 0;
		while (f <= 9)
		{
			if  (x != f && x < f)
			{
				putchar(x + 48);
				putchar(f + 48);

				if (x + f != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			f++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
