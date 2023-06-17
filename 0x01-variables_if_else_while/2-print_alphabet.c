#include <stdio.h>

/**
 * main - A C program that prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 26; i++)
	{
	alphabet = 'a' + i;
	putchar(alphabet);
	}

	putchar('\n');

return (0);
}
