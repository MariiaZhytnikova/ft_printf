/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhitnik <mzhitnik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:37:17 by mzhitnik          #+#    #+#             */
/*   Updated: 2024/12/12 10:40:34 by mzhitnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_recptr(unsigned long long ptr, int count, char *hex)
{
	if (ptr >= 16)
		count += ft_recptr(ptr / 16, count, hex);
	if (ft_putchar_fd(hex[ptr % 16]) < 0)
		return (-1);
	return (++count);
}

int	ft_putptr_fd(unsigned long long ptr)
{
	int		count;
	char	*hex;

	hex = "0123456789abcdef";
	if (ptr == 0)
		return (ft_putstr_fd("(nil)"));
	if (ft_putstr_fd("0x") == -1)
		return (-1);
	count = 0;
	count = ft_recptr(ptr, count, hex) + 2;
	if (count < 3)
		return (-1);
	return (count);
}
