#include "main.h"

/**
 * _strncpy - Copies at most n bytes of the string pointed to by src
 *            (including the null terminator) to the buffer pointed to by dest.
 * @dest: The destination buffer.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to be copied from src.
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

