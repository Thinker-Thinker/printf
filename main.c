#include <stdio.h>

#include <stdlib.h>

#include <limits.h>

#include "main.h"



/**

   * main - Entry point

    *

     * Return: 0 on success, error code otherwise

      */

int main(void)

{

		int len, len2, l;

l = INT_MIN;

			len = _printf("%i + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

				len2 = printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

					fflush(stdout);

						if (len != len2)

								{

											printf("Lengths differ.\n %i\n %i\n", len, len2);

													fflush(stdout);

																}
l += 1024;

	len = _printf("%i\n", l);

		len2 = printf("%i\n", l);

			fflush(stdout);

				if (len != len2)

						{

									printf("Lengths differ.\n");

											fflush(stdout);

													return (1);

														}
							return (0);

}
