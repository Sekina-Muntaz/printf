#include "main.h"

/**
 * parser - checks for the characters to be printed
 * @format: the format specires
 * @funct_list: array of function
 * @args: list of arguments
 * Return: The number of printed characters
 */

int parser(const char *format, convert funct_list[], va_list args)
{
	int i, j, r_val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{

			for (j = 0; funct_list[j].ch != NULL; j++)
			{
				if (format[i + 1] == funct_list[j].ch[0])
				{
					r_val = funct_list[j].f(args);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			if (funct_list[j].ch == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
