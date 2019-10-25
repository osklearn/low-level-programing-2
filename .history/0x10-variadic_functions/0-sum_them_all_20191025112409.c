#include "variadic_functions.h"

/**
 * sum_them_all - sum all numbers.
 * @n: input number.
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
va_list ap;
int i = 0;
int x = n;

va_start(ap, n);
for (; x; x--)
{
    printf("%d",va_arg(ap, const unsigned int));
    if ((i != (n - 1)) && separator != NULL)
    {
        printf("%s", separator);
    }
}
printf("\n");
va_end(ap);
}