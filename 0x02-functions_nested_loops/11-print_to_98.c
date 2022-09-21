#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print the numbers from n to 98
 * @n: numbers
 * Return: return 0 if successfull
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d", n);
		if (n > 98)
		{
			--n;
		}
		else if (n < 98)
		{
			++n;
		}										printf(", ");

												}
		printf("%d", 98);
		printf("\n");
}
