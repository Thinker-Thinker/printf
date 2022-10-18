#include <stdarg.h>
#include "main.h"
/**
 * print_dec - prints "%" character
 * @list: characters to be printed
 *
 * Return: number of printed character(s)
 */
int print_bin(va_list list)
{
	int i, j, a;
	int arr[1024];

	a = va_arg(list, int);

	if (a == 0)
	{
		_putchar('0');
		return(1);
	}
	if (a < 0)
		return (0);
	for (i = 0; a > 0; i++)
	{
		arr[i] = a % 2;
		a = a / 2;
	}
	j = i;
	for (; i > 0; i--)
		_putchar(arr[i - 1]  + '0');
	
	return (j);
}
