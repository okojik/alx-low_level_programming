#include <stdio.h>

/**
 * main - a C program that prints the size of various types on the computer
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char z;
	int y;
	long int x;
	long long int w;
	float v;

printf("Size of a char: %lu 1 byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a int: %lu 4 byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long int: %lu 4 byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long long: %lu 8 byte(s)\n", (unsigned long)sizeof(w));
printf("Size of a float: %lu 4 byte(s)\n", (unsigned long)sizeof(v));
return (0);
}
