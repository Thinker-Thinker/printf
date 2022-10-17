#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
* print_string - Prints a string
* @list: string to be printed
* @Return length of string
*/
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str)
	{
		for (i = 0; str[i]; i++)
			_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
* print_char - prints characters
* @list: characters to be printed
* Return: length of string
*/
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
* _printf - Prints everything
* @format: list of formaters for _printf
* Return: length of passed string
*/
int _printf(const char *format, ...)
{
	int i, j, sum;
	p_opt check[] = {
		{"c", print_char},
		{"s", print_string}
	};
	va_list list;
	
	sum = 0;
	va_start(list, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (j < 2)
			{
				if (format[i] == *(check[j].t))
				{
					sum += check[j].f(list);
					i++;
					break;
				}
				j++;
			}
		}
		_putchar(format[i]);
	}
	va_end(list);
	i = i + sum;
	return (i);
}
