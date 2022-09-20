#include "main.h"

/**
 * print_numbers - Prints numbers fro 0 - 9 with a new line
 * Return: Return 0 if successful
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
