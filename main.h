#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct structprint - structure containing
 * @q: the location and method to translate data to characters.
 * @u: print function for specific type.
 *
 * Return: int
 */
typedef struct structprint
{
	char *q;
	int (*u)(char *format, va_list);
} structype;

int _putchar(char ch);
int _printf(const char *format, ...);
int parser(const char *format, structype funct_list[], va_list args);
/*
 * int _puts(char *string);
 * int printc(char *format, va_list);
 * int printstr(char *format, va_list);
 * int (*driver(char *format))(char *format, va_list);
 * int _printf(char *format, ...);
 * int printint(char *format, va_list pa);
 * int integer(int number);
 * int contadordigit(int number);
 * int _abs(int number);
 * int printpercent(char *format, va_list pa);
 * int printhex(char *format, va_list);
 * int printHEX(char *format, va_list);
 * int printocta(char *format, va_list);
 * int print_unsign(char *format, va_list);
 */
int print_char(va_list);
int print_string(va_list args);
int print_percent(va_list);
int print_unsigned(unsigned int n);
int print_number(va_list);
int print_integer(va_list);
#endif
