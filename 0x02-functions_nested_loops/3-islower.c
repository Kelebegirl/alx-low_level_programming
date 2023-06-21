#include "main.h"

/**
 * _islower - function to check character is in lowercase
 * @c: checks input of function
 * Return: return 1 if 'c' is lowercase, 0 (Good)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
