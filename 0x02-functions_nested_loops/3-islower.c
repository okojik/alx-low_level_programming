#include "main.h"

/**
 * _islower - A function that checks for lowercase characters.
 * @c: The character to be checked.
 * Return: 1 if @c is a lowercase character, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}

