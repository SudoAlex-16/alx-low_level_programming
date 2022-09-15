#include "main.h"
/**
 * _islower - print alphabets in lowercase
 * @c: prints alphabets
 * Return: return 0 if successful
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
