#include "ft_printf.h"

int handle_format(char format, va_list args)
{
    int ret;

    if (format == 'c')
        ret = ft_putchar_fd(va_arg(args, int), 1);
    if (format == 's')
        ret = ft_putstr_fd(va_arg(args, char *), 1);
    if (format == 'p')
        ret = ft_putptr_fd(va_arg(args, void *), 1);
    if (format == 'd' || format == 'i')
        ret = ft_putnbr_fd(va_arg(args, int), 1);
    if (format == 'x' || format == 'X')
        ret = ft_puthex_fd(va_arg(args, unsigned int), 1, format);
    if (format == 'u')
        ret = ft_putunsigned_fd(va_arg(args, unsigned int), 1);
    if (format == '%')
        ret = ft_putchar_fd('%', 1);
    return (ret);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int     i;
    int     count;
    int     ret;

    i = 0;
    count = 0;
    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%' && (format[i + 1] == 'c' || format[i + 1] == 's' || format[i + 1] == 'p' || format[i + 1] == 'd' || format[i + 1] == 'i' || format[i + 1] == 'x' || format[i + 1] == 'X' || format[i + 1] == 'u' || format[i + 1] == '%'))
        {
            ret = handle_format(format[i + 1], args);
            if (ret == -1)
                return (-1);
            count += ret;
            i++;
        }
        else
        {
            ret = ft_putchar_fd(format[i], 1);
            if (ret == -1)
                return (-1);
            count += ret;
        }
        i++;
    }
    va_end(args);
    return (count);
}
