#include "main.h"
/**
 * puts2 - Prints every other character starting from the first
 * @str: characters to be printed
 */

void puts2(char *str)
{
	int c;
	char l;

	for (c = 0; str[c] != 0; c++)
	{
		if (c % 2 == 0)
		{
			l = str[c];
			_putchar(l);
		}
	}
	_putchar('\n');
}

