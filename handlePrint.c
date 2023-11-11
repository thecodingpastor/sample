#include "main.h"
/**
 * handlePrint - prints args in specified formats
 * @specifier: arg 1
 * @passedParams: arg 2
 * Return: an intege r
 */
int handlePrint(char specifier, va_list passedParams)
{
	if (specifier == 'c')
		return (_putchar(va_arg(passedParams, int)));
	else if (specifier == 's')
		return (printString(va_arg(passedParams, char *)));
	else if (specifier == '%')
		return (_putchar('%'));
	else if (specifier == 'd')
		return (printNum(va_arg(passedParams, int)));
	else if (specifier == 'i')
		return (printNum(va_arg(passedParams, int)));
	else if (specifier == 'b')
		return (printBinary(va_arg(passedParams, int)));
	else if (specifier == 'x')
		return (printHex(va_arg(passedParams, unsigned int), 0));
	else if (specifier == 'X')
		return (printHex(va_arg(passedParams, unsigned int), 1));
	else if (specifier == 'u')
		return (printUnsignedInt(va_arg(passedParams, unsigned int)));
	else if (specifier == 'o')
		return (printOctal(va_arg(passedParams, unsigned int)));
	else if (specifier == 'r')
		return (printRev(va_arg(passedParams, char *)));
	else if (specifier == 'p')
		return (printPointer(va_arg(passedParams, char *)));
	_putchar('%'), _putchar(specifier);
	return (2);
}
