#include "main.h"

/**
 * _isupper - Function which checks for uppercase of a string
 * @c: The string to be checked
 * Return: Returns 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
