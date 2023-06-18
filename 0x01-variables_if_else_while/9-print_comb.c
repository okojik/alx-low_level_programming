#include <stdio.h>
/**
 * main - A program that prints all possible combinations of single-digit nums
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
	for (j = i; j <= 9; j++)
		{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
		putchar('0' + j);

	if (i != 9 || j != 9)
		{
		putchar(44);
		putchar(32);
		}
		}

	}

	putchar('\n');

return (0);
}
