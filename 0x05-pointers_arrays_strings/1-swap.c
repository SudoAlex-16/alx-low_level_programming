#include "main.h"
/**
 * swap_int - A function that swaps the value of two integers
 * @a: One of the intergers to be swapped
 * @b: The second integer to be swapped
 * Return: Always 0 if successful
 */

void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;
	*b = p;
}
