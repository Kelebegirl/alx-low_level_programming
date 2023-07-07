#include "main.h"
int check_pal(char *s, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check if string is palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: calculate the length
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - check the character recursively
 * @s: string to check
 * @u: iterator
 * @len: length of string
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_pal(char *s, int u, int len)
{
	if (*(s + u) != *(s + len - u))
		return (0);
	if (u >= len)
		return (1);
	return (check_pal(s, u + 1, len - 1));
}
