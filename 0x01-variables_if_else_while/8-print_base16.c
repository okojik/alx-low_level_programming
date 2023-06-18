#include <stdio.h>
/**
 * main - A C program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}

	for (number = 'a'; number <= 'f'; number++)
	{
		putchar(number);
	}

	putchar('\n');
	return (0);
}
