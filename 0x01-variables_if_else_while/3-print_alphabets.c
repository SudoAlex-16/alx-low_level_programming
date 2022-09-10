#include <stdio.h>
/**
 * main - prints alphabets in both uppercase and lowercase
 * Return: return 0 if successful
 */
int main(void)
{
	char cha;

	for (cha = 'a' ; cha <= 'z' ; cha++)
	{
		putchar(cha);
	}
	for (cha = 'A' ; cha <= 'Z' ; cha++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}


