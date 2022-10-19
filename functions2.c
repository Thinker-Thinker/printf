#include <stdarg.h>
#include "main.h"

/**
 * print_bin - prints "%" character
 * @list: characters to be printed
 *
 * Return: number of printed character(s)
 */
int print_bin(va_list list)
{
	int i, j, a;
	int arr[64];

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


/**
 * print_uint - prints "%" character
 * @list: characters to be printed
 *
 * Return: number of printed character(s)
 */
int print_uint(va_list list)
{
	int i, j, a;
	int arr[20];

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
/**
 * print_oct - prints "%" character
 * @list: characters to be printed
 *
 * Return: number of printed character(s)
 */
int print_oct(va_list list)
{
	int i, j, a;
	int arr[16];

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
		arr[i] = a % 8;
		a = a / 8;
	}
	j = i;
	for (; i > 0; i--)
		_putchar(arr[i - 1]  + '0');

	return (j);
}

/**
 * print_hexa - prints "%" character
 * @list: characters to be printed
 *
 * Return: number of printed character(s)
 */
int print_hexa(va_list list)
{
	int i, j, a, t;
	int arr[8];


	a = va_arg(list, int);

	if (a == 0)
	{
		_putchar('0');
		return(1);
	}

	for (i = 0; a > 0; i++)
	{
		t = a % 16;
		a = a / 16;
		if (t > 9)
		{
			arr[i] = 87 + t;
			continue;
		}
		arr[i] = t + 48;
	}
	j = i;
	for (; i > 0; i--)
		_putchar(arr[i - 1]);
	
	return (j);
}
/**
 * print_hexaC - prints "%" character
 * @list: characters to be printed
 *
 * Return: number of printed character(s)
 */
int print_hexaC(va_list list)
{
	int i, j, a, t;
	int arr[8];

	a = va_arg(list, int);

	if (a == 0)
	{
		_putchar('0');
		return(1);
	}

	for (i = 0; a > 0; i++)
	{
		t = a % 16;
		a = a / 16;
		if (t > 9)
		{
			arr[i] = 55 + t;
			continue;
		}
		arr[i] = t + 48;
	}
	j = i;
	for (; i > 0; i--)
		_putchar(arr[i - 1]);
	
	return (j);
}
