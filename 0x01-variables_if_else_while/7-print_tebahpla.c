#include <stdio.h>

/**
 * main - A C program that prints the lowercase alphabet in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
	putchar(letter);
	}

	putchar('\n');

return (0);
}

