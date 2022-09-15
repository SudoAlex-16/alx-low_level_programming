#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 * Return: return 0 if successful
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -(last_digit);
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		_putchar(last_digit + '0');
		return (last_digit % 10);
	}
	return (0);
}
