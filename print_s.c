#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf_string - Prints a string
 * @val: argument containing the string to be printed
 * Return: the length of the string
 */

int _printf_string(va_list val)
{
	char *str = va_arg(val, char *);
	int i, length;

	if (str == NULL)
	{
		str = "(null)";
	}
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
		{
			_putchar(str[i]);
		}
		return (length);
	}
}
