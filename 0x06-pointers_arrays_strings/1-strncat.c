#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Copied string
 * @src: Source string
 * Return: Return 0 if successful
 * @n: number of bytes
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
