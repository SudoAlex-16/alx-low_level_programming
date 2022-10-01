#include "main.h"

/**
 * _strcpy - Function that copies the string pointed to by src
 * @dest: The buffer
 * @src: The source
 * Return: return 0 if successful
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0, len = 0;

	while (src[len] != '\0')
	{
		len++;
		for (index = 0; index < len; index++)
		{
			dest[index] = src[index];
		}
		dest[index] = '\0';
	}
	return (dest);
}
