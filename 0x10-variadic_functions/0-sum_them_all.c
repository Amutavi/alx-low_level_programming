#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all parameters
 * @n: no of parameters passed to th fxn
 * @...: variable no of parameters to calculate sum of
 * Return: if n == 0 - 0, otherwise, sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
