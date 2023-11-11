#include "main.h"
/**
 * printHex - prints hexadecimals
 * @num: parameter one
 * @uppercase: parameter two
 * Return: returns an integer
 */
int printHex(unsigned int num, int uppercase)
{
	char hexCharsLower[16] = "0123456789abcdef";
	char hexCharsUpper[16] = "0123456789ABCDEF";
	const char *hexChars = uppercase ? hexCharsUpper : hexCharsLower;
	char hexBuffer[10];
	int i = 0;

	while (num > 0)
	{
		hexBuffer[i++] = hexChars[num % 16];
		num /= 16;
	}
	while (i > 0)
	{
		_putchar(hexBuffer[--i]);
	}
	return (i);
}
