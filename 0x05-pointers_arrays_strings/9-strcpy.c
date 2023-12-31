#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: copy to
 * @src: copy from
 * Return: To dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; j < i ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

