#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
/**
 * struct converter - structure definition
 * @ch: array of character
 * @f: a function pointer
 */

struct converter
{
	char *ch;
	int (*f)(va_list);
};
typedef struct converter convert;

int print_binary(va_list types);

int _putchar(char c);
int _printf(const char *format, ...);
void _vprintf(const char *format, va_list args);
int parser(const char *format, convert funct_list[], va_list args);
int print_char(va_list);
int print_string(va_list args);
int print_percent(va_list);
int print_unsgined(unsigned int n);
int print_number(va_list);
int print_integer(va_list);
#endif
