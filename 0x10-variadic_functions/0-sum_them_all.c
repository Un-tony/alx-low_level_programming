/*
 * File: 0-sum_them_all.c
 */

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number of parameters to be passed to the function
 * @...: a variable number of parameters to calculate the sum of
 *
 * Return: If n == 0 - 0.
 *         Otherwise - sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int index, sum = 0;

	va_start(num ,n);

	for (index = 0; index < n; index++)
		sum += va_arg(num ,int);

	va_end(num);

	return (sum);
}
