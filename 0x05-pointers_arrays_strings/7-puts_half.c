#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: String to be printed into half
 */

void puts_half(char *str)
{
	int c, a;

	for (c = 0; str[c] != '\0'; ++c)
	{
		;
	}
	for (a = (c + 1) / 2; a < c; ++a)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

