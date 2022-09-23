#include "main.h"

/**
 * _strcat - Function appends the src string to the dest string
 * @dest: The destination
 * @src: The source
 * Return: Returns 0 if successful
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
