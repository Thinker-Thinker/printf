#include "main.h"
#inculde <stdarg.h>
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
        char c = '%';

        write(1, &c, 1);
        return (1);
}
