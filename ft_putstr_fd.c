/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhitnik <mzhitnik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:37:20 by mzhitnik          #+#    #+#             */
/*   Updated: 2024/12/03 16:17:32 by mzhitnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s)
{
	if (!s)
		return (ft_putstr_fd("(null)"));
	if (write(1, s, ft_strlen(s)) == ft_strlen(s))
		return (ft_strlen(s));
	return (-1);
}
