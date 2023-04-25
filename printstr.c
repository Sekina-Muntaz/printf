#include "main.h"

/**
 * print_char - print single characters
 * @args: list of arguments passed
 *
 * Return: the number of characters printed
 */
int print_char(va_list args)
{
	char value;

	value = va_arg(args, int);
	_putchar(value);
	return (1);
}

/**
 * print_string - print strings (array of cgaracters)
 * @args: list of arguments passed
 *
 * Return: the number of characters printed
 */

int print_string(va_list args)
{
	int i;
	const char *s;

	s = va_arg(args, const char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
