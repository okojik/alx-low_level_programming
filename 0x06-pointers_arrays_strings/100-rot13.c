#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: The string to be encoded.
 *
 * Return: The encoded string.
 */
char *rot13(char *s)
{
	int i, j;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_letters = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
	{
		if (s[i] == letters[j])
	{
		s[i] = rot13_letters[j];
		break;
	}
	}
	}

	return (s);
}
