#include "main.h"
/**
 * main - prints the alphabets
 * Return: return 0 if successful
 */

void print_alphabet(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
