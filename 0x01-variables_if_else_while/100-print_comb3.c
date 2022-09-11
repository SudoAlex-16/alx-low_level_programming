#include <stdio.h>
/**
 * main - prints all possible combinations of two numbers
 * Return: return 0 if successful
 */

int main(void)
{
	int a = 0;
	int i;
	int j;

	while (a <= 99)
	{
		i = (a / 10 + '0');
		j = (a % 10 + '0');
		if ((i < j) && (i != j))
		{
			putchar(i);
			putchar(j);
			if (a != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
