#include "main.h"
/**
 * printUnsignedInt - prints unsingned it
 * @num: params
 * Return: returns an integer
 */

int printUnsignedInt(unsigned int num)
{
	int total_chars = 0;
	int i = 0;
	char buffer[10];

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		buffer[i++] = '0' + (num % 10);
		num /= 10;
	}

	while (i > 0)
	{
		_putchar(buffer[--i]);
		total_chars++;
	}
	return (total_chars);
}
