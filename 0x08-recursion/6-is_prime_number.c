#include "main.h"

int actual_prime(int n, int u);

/**
 * is_prime_number - if integer is a prime number
 * @n: number
 * Return: 1 if prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * is_prime_number - if integer is a prime number
 * @n: number
 * @u: iterator
 *
 * Return: 1 if prime number, 0 if not
 */

int actual_prime(int n, int u);
{
	if (u == 1)
		return (1);
	if (n % u == 0 && u > 0)
		return (0);
	return (actual_prime(n, u - 1));
}
