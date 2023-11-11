#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <stdio.h>

int _printf(const char *format, ...);
int printString(const char *str);
int printNum(int n);
int printBinary(unsigned int num);
int _putchar(char c);
int handlePrint(char specifier, va_list args);
int printHex(unsigned int num, int uppercase);
int printUnsignedInt(unsigned int num);
int printOctal(unsigned int num);
int printRev(char *);
char *rot13(char *str);
void printRot13(const char *input);
void printRot13WithFlags(const char *format, ...);
int printPointer(const void *ptr);
int print_rot13(va_list args);

#endif
