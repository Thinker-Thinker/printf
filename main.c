#include "main.h"
#include <stdio.h>

/**
 * main - tests the _printf function
 *
 * Return: Always 0.
 */
int main(void)
{
	int code;

	printf("Numeric:\n");
	printf("============\n");
/* %i without param */
	code = printf("Std: %i.\n");
	printf("Std Returns: %d\n", code);
	code = _printf("Our: %i.\n");
	printf("Our Returns: %d\n", code);

	code = printf("Std: %i.\n", NULL);
	printf("Std Returns: %d\n", code);
	code = _printf("Our: %i.\n", NULL);
	printf("Our Returns: %d\n", code);

	code = printf("Std: %d.\n", 67);
	printf("Std Returns: %d\n", code);
	code = _printf("Our: %d.\n", 67);
	printf("Our Returns: %d\n", code);

	code = printf("Std: %d.\n", NULL);
	printf("Std Returns: %d\n", code);
	code = _printf("Our: %d.\n", NULL);
	printf("Our Returns: %d\n", code);

	code = printf("Std: %d.\n", 0 % 10);
	printf("Std Returns: %d\n", code);
	code = _printf("Our: %d.\n", 0 % 10);
	printf("Our Returns: %d\n", code);

	printf("\nCharacters:\n");
	printf("============\n");

	code = printf("Std: %%.\n");
	printf("Std Returns: %d\n", code);
	code = _printf("Our: %%.\n");
	printf("Our Returns: %d\n", code);

	code = printf("Std: Cu%cio.us\n", NULL);
	printf("Std Returns: %d\n", code);
	code = _printf("Our: Cu%cio.us\n", NULL);
	printf("Our Returns: %d\n", code);

	code = printf("Std: Cu%sio.us\n", NULL);
	printf("Std Returns: %d\n", code);
	code = _printf("Our: Cu%sio.us\n", NULL);
	printf("Our Returns: %d\n", code);

	code = printf("Std: Cu%%io.us\n");
        printf("Std Returns: %d\n", code);
        code = _printf("Our: Cu%%io.us\n");
        printf("Our Returns: %d\n", code);


	return (0);
}
