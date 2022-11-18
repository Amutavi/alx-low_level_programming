#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - new struct type defining a printer
 * @symbol: Symbol representing a data type
 * @print: function pointer that prints data type corresponding t
 * o symbol
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
