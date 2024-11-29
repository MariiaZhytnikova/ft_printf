#include "ft_printf.h"

int ft_putptr_fd(void *ptr, int fd)
{
    int     count;

    count = 0;
    if (ft_putstr_fd("0x", 1) == -1)
        return (-1);
    count += 2;
    if (ft_puthex_fd((unsigned long long)ptr, 1, 'x') == -1)
        return (-1);
    return (count + ft_strlen((unsigned long long)ptr));
}