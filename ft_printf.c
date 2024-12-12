/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhitnik <mzhitnik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:20:07 by mzhitnik          #+#    #+#             */
/*   Updated: 2024/12/12 10:35:24 by mzhitnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(char format, va_list args)
{
	int	ret;

	if (format == 'c')
		ret = ft_putchar_fd(va_arg(args, int));
	if (format == 's')
		ret = ft_putstr_fd(va_arg(args, char *));
	if (format == 'p')
		ret = ft_putptr_fd(va_arg(args, unsigned long long));
	if (format == 'd' || format == 'i')
		ret = ft_putnbr_fd(va_arg(args, int));
	if (format == 'x' || format == 'X')
		ret = ft_puthex_fd(va_arg(args, unsigned int), format);
	if (format == 'u')
		ret = ft_putunsigned_fd(va_arg(args, unsigned int));
	if (format == '%')
		ret = ft_putchar_fd('%');
	return (ret);
}

static int	validation(char format)
{
	char	*valid;

	valid = "cspdiuxX%";
	while (*valid)
	{
		if (*valid == format)
			return (0);
		valid++;
	}
	return (1);
}

static int	ft_parce(const char *format, va_list args)
{
	int	count;
	int	ret;

	count = 0;
	while (*format)
	{
		if (*format == '%' && validation(*(format + 1)) == 0)
		{
			ret = handle_format(*(format + 1), args);
			if (ret == -1)
				return (-1);
			count += ret;
			format++;
		}
		else
		{
			if (ft_putchar_fd(*format) == -1)
				return (-1);
			count++;
		}
		format++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	if (!format)
		return (-1);
	count = ft_parce(format, args);
	va_end(args);
	return (count);
}
