#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct printer
{
        char *symbol;
        void (*print)(va_list arg);
}printer_t

void print_char(va_list arg)
{
        printf("%c", va_arg(arg, int));
}
void print_int(va_list arg)
{
        printf("%d", va_arg(arg, int));
}
void print_float(va_list arg)
{
        printf("%f", va_arg(arg, double));
}
void print_string(va_list arg)
{
        char *str = va_arg(arg, char *);

        if (str == NULL)
                str = "(nil)";
        printf("%s", str);
}
#endif
