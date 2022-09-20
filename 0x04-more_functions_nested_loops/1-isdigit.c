#include "main.h"

/**
 * _isdigit - Function that checks for numbers 0-9
 * @c: Digit to be checked
 * Return: Return 1 if a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
