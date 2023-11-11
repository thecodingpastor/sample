#include "main.h"
/**
 * printPointer - prints a pointer
 * @ptr: pointer to be printed
 * Return: charater count
 */
int printPointer(const void *ptr)
{
	unsigned long num = (unsigned long)ptr;
	int total_chars = 0;

	if (ptr == NULL)
		return (printString("(nil)"));

	_putchar('0'), _putchar('x'), total_chars += 2;
	if (num == 0)
		_putchar('0'), total_chars++;
	else
	{
		char hexChars[16] = "0123456789abcdef";
		char hexBuffer[16];
		int i = 0;

		while (num > 0)
		{
			hexBuffer[i++] = hexChars[num % 16];
			num /= 16;
		}
		while (i > 0)
			_putchar(hexBuffer[--i]), total_chars++;
	}
	return (total_chars);
}
