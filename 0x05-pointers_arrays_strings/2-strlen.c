#include "main.h"
/**
 * _strlen - This returns the length of a string
 * @s: String which its length is to be returned
 * Return: always 0 if successful
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return(len);
}
