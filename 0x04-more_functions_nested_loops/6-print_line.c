#include "main.h"

/**
 * print_line - Prints the _ character
 * @n: number of times the character should be printed
 * Return: Return 0 if successful
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
