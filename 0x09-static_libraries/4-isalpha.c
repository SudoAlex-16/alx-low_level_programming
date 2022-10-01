#include "main.h"
/**
 * _isalpha - check for alphabetic characteristics
 * @c: prints alphabets
 * Return: return  1 if successful
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
