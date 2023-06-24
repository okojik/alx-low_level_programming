#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints c to stdout
 * @c: The charracter to print
 *
 * Return: 1 (success)
 * On error, return -1, and set errno automatically.
 * */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
