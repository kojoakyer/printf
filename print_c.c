#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - Printf function
 * @format: Format.
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...) 
{
    va_list args;
    va_start(args, format);

    int count = 0;  // To keep track of the number of characters printed

    while (*format != '\0') 
{
        if (*format == '%') 
{
            format++;  // Move past the '%'

            // Check for the conversion specifiers
            switch (*format) 
{
                case 'c': 
{
                    // Print a character
                    char c = (char) va_arg(args, int);
                    putchar(c);
                    count++;
                    break;
                }
                case 's': 
{
                    // Print a string
                    char *str = va_arg(args, char *);
                    while (*str != '\0') 
{
                        putchar(*str);
                        str++;
                        count++;
                    }
                    break;
                }
                case '%': 
{
                    // Print a literal '%'
                    putchar('%');
                    count++;
                    break;
                }
                default:
                    // Unsupported specifier, just print it as is
                    putchar('%');
                    putchar(*format);
                    count += 2;
            }
        } else
{
            // Regular character, print it
            putchar(*format);
            count++;
        }

        format++;  // Move to the next character in the format string
                    }

    va_end(args);

    return count;
}
