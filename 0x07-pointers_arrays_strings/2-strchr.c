#include <stddef.h>
#include "main.h"

/**
 * _strchr - check for occurence of a character in a string
 * @s: string to search
 * @c: character to search for
 * Return: pointer to the first occurence of the character,
 * otherwise NULL (if not found)
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
