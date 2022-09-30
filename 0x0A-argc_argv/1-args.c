#include <stdio.h>

/**
 * main - Entry point of a program containing two arguments
 * @argc: Number of arguments in a program including the
 * program name
 * @argv: A one dimentional array vector with the arguments
 * Return:Return 0 if successful
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
