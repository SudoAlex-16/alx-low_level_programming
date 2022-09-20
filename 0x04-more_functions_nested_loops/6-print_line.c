#include "main.h"

/**
 * print_line - Prints the _ character
 * @n: number of times the character should be printed
 * Return: Return 0 if successful
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
