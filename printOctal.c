#include "main.h"
/**
 * printOctal - prints octal
 * @num: params
 * Return: returns int
 */

int printOctal(unsigned int num)
{
	int charsPrinted = 0;

	if (num > 7)
	{
		charsPrinted += printOctal(num / 8);
	}
	_putchar('0' + num % 8);
	charsPrinted++;
	return (charsPrinted);
}
