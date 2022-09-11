#include <stdio.h>
/**
 * main - print the combination of three digits
 * without repetition
 * Return: return 0 if successful
 */

int main(void)
{
	int a = 0;
	int i;
	int j;
	int k;

	while (a <= 999)
	{
		i = (a / 100 + '0');
		j = (a / 10 % 10 + '0');
		k = (a % 10 + '0');
		if (((i < j) && (j < k)) && (i != j) && (j != k))
		{
			putchar(i);
			putchar(j);
			putchar(k);
			if (a != 789)
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

