#include "main.h"
/**
 * main - print the alphabets ten times
 * Return: return 0 if successful
 */

void print_alphabet_x10(void)
{
	char alpha;
	char num = 1;

	while (num <= 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		num++;
	}
}
