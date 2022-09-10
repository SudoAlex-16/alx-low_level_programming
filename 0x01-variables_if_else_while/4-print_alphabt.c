#include <stdio.h>
/**
 * main - print alphabets except e and q
 * Return: return 0 if successful
 */

int main(void)
{
	char cha;

	for (cha = 'a' ; cha <= 'z' ; cha++)
	{
		if (cha != 'e' && cha != 'q')
		{
			putchar(cha);
		}
	}
	putchar('\n');
	return (0);
}
