#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
* _printf - Prints everything 
*@format: list of formaters for _printf
*/
void print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str)
	{
		for (i = 0; str[i]; i++)
			_putchar(str[i]);
		i++;
		return;
	}
	return;
}

/**
* _printf - Prints everything 
*@format: list of formaters for _printf
*/
void print_char (va_list list)
{
	_putchar(va_arg(list, int));
}

/**
* _printf - Prints everything 
*@format: list of formaters for _printf
*/



int _printf(const char *format, ...)
{
	int i, j;
	p_opt check[] = {
		{"c", print_char},
		{"s", print_string}
	};
	va_list list;
	va_start(list, format);

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
					check[j].f(list);
					i++;
					break;
				}
				j++;
			}
		}
		_putchar(format[i]);
	}
	va_end(list);

	return (i);
}








