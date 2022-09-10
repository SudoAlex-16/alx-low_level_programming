#include <stdio.h>
/**
 * main - print numbers in base 16
 * Return: return 0 if successful
 */

int main(void)
{
	int num;
	char cha;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
	}
	for (cha = 'a' ; cha <= 'f' ; cha++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
