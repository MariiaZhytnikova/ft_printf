/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhitnik <mzhitnik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:37:20 by mzhitnik          #+#    #+#             */
/*   Updated: 2024/12/12 10:40:43 by mzhitnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s)
{
	int	len;

	if (!s)
		return (ft_putstr_fd("(null)"));
	len = 0;
	while (s[len])
	{
		if (ft_putchar_fd(s[len]) == -1)
			return (-1);
		len++;
	}
	return (len);
}
