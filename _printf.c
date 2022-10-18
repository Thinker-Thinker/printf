#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - produces output according to format
 * @format: a character string
 *
 * Return: length of the string
 */
int _printf(const char *format, ...)
{
	int i, j, len;
	p_opt check[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_mod},
		{"i", print_int},
		{"d", print_dec},
		{NULL, NULL}
	};
	va_list list;

	len = 0;
	i = 0;
	va_start(list, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (-1);
			j = 0;
			while (j < 5)
			{
				if (format[i] == *(check[j].t))
				{
					len += check[j].f(list);
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
	}
	va_end(list);
	return (len);
}
