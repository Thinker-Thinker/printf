#ifndef __MAIN_H__
#define __MAIN_H__

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
int print_bin(va_list list);
int print_oct(va_list list);
int print_uint(va_list list);
int print_hexaC(va_list list);
int print_hexa(va_list list);

int print_mod(va_list list);
int print_dec(va_list list);
int print_int(va_list list);
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);

#endif /* __MAIN_H__ */
