#include "ft_printf.h"

int ft_putstr_fd(char *s, int fd)
{
    if (!s)
        return (ft_putstr_fd("(null)", fd));
    if (write(fd, s, ft_strlen(s)) == ft_strlen(s))
        return (ft_strlen(s));
    return (-1);
}