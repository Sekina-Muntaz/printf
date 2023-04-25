#include "main.h"

/**
 * print_number - print all numbers
 * @args: list of arguments passed
 *
 * Return: the number of characters printed
 */

int print_number(va_list args)
{
	int n;
	int divide;
	int len;
	unsigned int num;

	n  = va_arg(args, int);
	divide = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / divide > 9; )
		divide *= 10;

	for (; divide != 0; )
	{
		len += _putchar('0' + num / divide);
		num %= divide;
		divide /= 10;
	}

	return (len);
}

/**
 * print_unsigned - print unsigned integers
 * @n: input variable
 *
 * Return: the number of characters printed
 */
int print_unsigned(unsigned int n)
{
	int divide;
	int len;
	unsigned int num;

	divide = 1;
	len = 0;

	num = n;

	for (; num / divide > 9; )
		divide *= 10;

	for (; divide != 0; )
	{
		len += _putchar('0' + num / divide);
		num %= divide;
		divide /= 10;
	}

	return (len);
}

/**
 * print_percent - print percent sign
 * @args: list of arguments passed
 *
 * Return: the number of characters printed
 */

int print_percent(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}

/**
 * print_integer - print whole numbers
 * @args: list of arguments passed
 *
 * Return: the number of characters printed
 */

int print_integer(va_list args)
{
	int n;

	n = print_number(args);
	return (n);

}
