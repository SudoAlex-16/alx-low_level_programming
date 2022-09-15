#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print the numbers from n to 98
 * @n: numbers
 * Return: return 0 if successfull
 */

void print_to_98(int n)
{

	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%ld, " n++);
			printf("%ld\n", n);
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%ld, " n--);
			printf("%ld\n", n);
		}
	}
}
