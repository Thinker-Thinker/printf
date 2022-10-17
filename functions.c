#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
* print_string - Prints a string
* @list: string to be printed
* Return: length of string
*/
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);

	if (str == NULL)
	{
		str = "(null)";
		for (i = 0; str[i]; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = 0; str[i]; i++)
			_putchar(str[i]);
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
 * print_mod - prints "%" character
 * @list: characters to be printed
 *
 * Return: number of printed character(s)
 */
int print_mod(va_list list)
{
	(void) list;
	_putchar('%');
	return (1);
}

/**
 * print_int - prints "i" character
 * @list: characters to be printed
 *
 * Return: number of printed character(s)
 */
int print_int(va_list list)
{
	int i, exp, digit, t, n, a, expo;

	exp = expo = 1;
	i = t = 0;
	a = va_arg(list, int);
	if (a < 0)
	{
		_putchar('-');
		a = a * -1;
		i++;
	}
	if (a == 0)
	{
		_putchar('0');
		i++;
	}
	while (a / expo > 9)
		expo = expo * 10;
	digit = expo;
	while (a != 0)
	{
		n = a / expo + '0';
		_putchar(n);
		a = a % expo;
		expo = expo / 10;
		i++;
		t++;
	}
	for (; t > 1; t--)
		exp = exp * 10;
	digit = digit / exp;
	while (digit > 9)
	{
		_putchar('0');
		digit = digit / 10;
	}
	return (i);
}

/**
 * print_dec - prints "%" character
 * @list: characters to be printed
 *
 * Return: number of printed character(s)
 */
int print_dec(va_list list)
{
	return (print_int(list));
}
