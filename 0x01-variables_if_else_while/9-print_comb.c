#include <stdio.h>
/**
 * main - A program that prints all possible combinations of single-digit nums
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);

	if (i != 57)
		{
		putchar(',');
		putchar(' ');
		}

	}

	putchar('\n');

return (0);
}
