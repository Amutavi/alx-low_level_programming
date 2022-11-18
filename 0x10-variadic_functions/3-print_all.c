#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints a character
 * @arg: list of arguments pointing to character
 * to be printed
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - prints an integer
 * @arg: list of arguments pointing to integer to be printed
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - prints a float
 * @arg: list of arguments pointing to float to be printed
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - prints a string
 * @arg: List of arguments pointing to string to be printed
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - prints anything folllowed by a new line
 * @format: string of characters representing argument types
 * @...: variable no of arguments to be printed
 * Description: Any argument not of type char, int, float or char * is ignored.
 * if a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
}
