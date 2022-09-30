#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: One dimentional array vector
 * Return: Return 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
