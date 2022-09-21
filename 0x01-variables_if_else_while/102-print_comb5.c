#include <stdio.h>
/**
 * main - print all possible combinations of two two digit
 * Return: return 0 if successful
 */

int main(void)
{
	int a;
	int b;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i < j)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++j;
		}
		++i;
	}
	putchar('\n');
	return (0);
}
