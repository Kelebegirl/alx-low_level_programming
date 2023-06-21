#include "main.h"

/**
 * print_alphabet_x10 - the _putchar function to print the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int line, s;

	for (line = '0'; line <= '9'; line++)
	{
		for (s = 'a'; s <= 'z'; s++)
			_putchar(s);
		_putchar('\n');
	}
}
