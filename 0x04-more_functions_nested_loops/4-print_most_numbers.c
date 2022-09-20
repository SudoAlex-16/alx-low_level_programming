#include "main.h"

/**
 * print_most_numbers - Prints numbers fro 0 - 9 without 2 and 4
 * Return: Return 0 if successful
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
