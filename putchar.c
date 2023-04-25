#include <unistd.h>
/**
 * _putchar - output characters
 * @c: input string
 *
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
