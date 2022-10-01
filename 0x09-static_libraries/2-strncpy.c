#include "main.h"

/**
 * _strncpy - Copies soecific character bytes from src to dest
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes
 * Return: Return 0 if successful
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (a != n)
	{
		dest[b] = src[a];
		a++;
		b++;
		if (src[a] == '\0')
		{
			break;
		}
	}
	while (b != n)
	{
		dest[b++] = '\0';
	}
	return (dest);
}
