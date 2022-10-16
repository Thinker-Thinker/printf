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
void (*f)(va_list);

} p_opt;


int _putchar(char c);

int _printf(const char *format, ...);

#endif
