#include "main.h"
#include <stdio.h>
/**
 * main - print the numbers from n to 98
 * Return: return 0 if successfull
 */

void print_to_98(int n)
{
	int n = 0; 

	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, " n++);
			printf("%d\n", n);
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, "n--);
			printf("%d\n", n);
		}
	}
}
