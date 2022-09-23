#include "main.h"

/**
 * leet - encode a string into 1337
 * @str: the string to be processed
 * Return: resultant string
 */

char *leet(char *str)
{
	char ch[] = "aAeEoOtTlL";
	char leet[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; ch[j] != '\0'; ++j)
		{
			if (str[i] == ch[j])
			{
				str[i] = leet[j];
				break;
			}
		}
	}
	return (str);
}
