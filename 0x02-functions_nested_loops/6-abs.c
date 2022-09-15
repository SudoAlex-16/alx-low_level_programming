#include "main.h"
#include <stdio.h>
/**
 *  _abs - prints the absolute value
 *  @a: number
 *  Return: return 0 if successful
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}
