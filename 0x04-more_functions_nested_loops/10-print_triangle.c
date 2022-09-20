#include "main.h"

/**
 * print_triangle - Function prints triangle followed by a new line
 * @size: Size of the triangle
 * Return: Return 0 if successful;
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if ((j <= size - i))
				{
					_putchar(32);
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
