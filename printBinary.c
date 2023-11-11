#include "main.h"
/**
 * printBinary - prints binary to stdoutput
 * @num: takes num as a single param
 * Return: returns an integer
 */
int printBinary(unsigned int num)
{
	int charsPrinted = 0;

	if (num > 1)
	{
		charsPrinted += printBinary(num / 2);
	}
	_putchar('0' + num % 2);
	charsPrinted++;
	return (charsPrinted);
}
