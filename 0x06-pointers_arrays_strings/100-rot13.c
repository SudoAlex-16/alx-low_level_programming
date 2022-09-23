#include "main.h"

/**
 * rot13 - encode a string using rot13
 * @str: the string to be encodes
 * Return: the encoded string
 */

char *rot13(char *str)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char cipher[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; alpha[j] != '\0'; ++j)
		{
			if (str[i] == alpha[j])
			{
				str[i] = cipher[j];
				break;
			}
		}
	}
	return (str);
}
