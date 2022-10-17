#ifndef PRINTF_H_
#define PRINTF_H_

#include <stdarg.h>
/**
* struct print - print type with corresponding print function
* @t: print type
* @f: print function
*/

typedef struct print
{
char *t;
int (*f)(va_list);

} p_opt;

int print_mod(va_list list);

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);

#endif
