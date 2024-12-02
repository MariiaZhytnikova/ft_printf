/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhitnik <mzhitnik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:37:17 by mzhitnik          #+#    #+#             */
/*   Updated: 2024/12/02 16:44:40 by mzhitnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_fd(void *ptr, int fd)
{
	int	count;
	int	len;

	count = 0;
	if (ft_putstr_fd("0x", 1) == -1)
		return (-1);
	count += 2;
	len = ft_puthex_fd((unsigned long long)ptr, 1, 'x');
    if (len < 0)
		return (-1);
    count += len;   
	return (count);
}
