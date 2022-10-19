#include "main.h"
#include <stdio.h>


/**
 * main - entry point
 *
 * Return: (0)
 */

int main(void)

{
	int yeah;

	 yeah =   printf("%b\n", 0);
	 printf("std %i", yeah);
	 yeah = printf("%b\n", -1);
	 printf("std %i", yeah);
	 yeah =	    _printf("%b\n", 0);
	 printf("our %i", yeah);
	 yeah =_printf("%b\n", -1);
	 printf("our %i", yeah);

	 return (0);

}
