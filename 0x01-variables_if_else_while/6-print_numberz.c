#include <stdio.h>
/**
 * main - print all single digits of base 10
 * Return: return 0 if successful
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
