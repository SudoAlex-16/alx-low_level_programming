#include "main.h"

/**
 * more_numbers - Prints numbers fro 0 - 14 10 times
 * Return: Return 0 if successful
 */

void more_numbers(void)
{
	int i, j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('0' + (j / 10));
			}
			_putchar('0' + (j % 10));
			
		}
		_putchar('\n');
	}
}
