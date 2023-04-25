#include "main.h"
#include <stdint.h>

/**
 * _printf - prints formated output
 * @format: the format
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int count;

	convert funct_list[] =	{
		{"c", print_char},
		{"b", print_binary},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};

	va_list args;


	if (format == NULL)
		return (-1);

	va_start(args, format);

	/** call a parser function*/

	count = parser(format, funct_list, args);
	va_end(args);

	return (count);
}
