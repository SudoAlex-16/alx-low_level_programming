#include "main.h"

/**
 * print_line - Prints the _ character
 * @n: number of times the character should be printed
 * Return: Return 0 if successful
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
