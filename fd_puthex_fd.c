/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhitnik <mzhitnik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:36:59 by mzhitnik          #+#    #+#             */
/*   Updated: 2024/12/03 16:15:10 by mzhitnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_fd(unsigned long nb, char format)
{
	int		count;
	char	*hex;

	count = 0;
	hex = NULL;
	if (format == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (nb >= 16)
		count = ft_puthex_fd(nb / 16, format);
	if (ft_putchar_fd(hex[nb % 16]) < 0)
		return (-1);
	return (++count);
}


