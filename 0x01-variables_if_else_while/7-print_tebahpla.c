#include <stdio.h>
/**
 * main - prints alphabets in reverse order
 * Return: return 0 if successful
 */

int main(void)
{
	char cha;

	for (cha = 'z' ; cha >= 'a' ; cha--)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
