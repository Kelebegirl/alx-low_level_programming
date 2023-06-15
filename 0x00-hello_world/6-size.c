#include <stdio.h>
/**
 * main - Program that print various size types on the computer
 * Return: 0 (Good)
 */
int main(void)
{
	char c;
	int d;
	long int e;
	long long int f;
	float i;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(f));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(i));
return (0);
}
