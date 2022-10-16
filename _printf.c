#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
* _printf - Prints everything 
*@format: list of formaters for _printf
*/
void print_string(va_list list, int sum)
{
	int i;
	char *str;

	str = va_args(list, char *);
	if (str)
	{
		for (i = 0; str[i]; i++)
			_putchar(str[i]);
		i++;
		sum += i;
		return;
	}
	return;
}

/**
* _printf - Prints everything 
*@format: list of formaters for _printf
*/
int print_char (va_list list, int sum)
{
	_putchar(va_args(list, int));
	sum++;
}

/**
* _printf - Prints everything 
*@format: list of formaters for _printf
*/



int _printf(const char *format, ...)
{
	int sum, i, j, k;
	p_opt check = {
		{"c", print_char},
		{"s", print_string}
	};
	va_list list;
	va_start(list, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')	
		{
			j = 0;	
			while (j < 2)
			{
			if (format[i + 1] == *(check[j].t))
				{
					check[i].f(list, sum);		
					break;
				}
				j++;
			}
			i++;
		}
		_putchar(format[i]);
	}
	va_end(list);

	}
	i++;
	return (sum + i);
}














