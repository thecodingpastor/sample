#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: char to be encoded
 *
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i, j;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char data2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == data1[j])
			{
				str[i] = data2[j];
				break;
			}
		}
	}
	return (str);
}
