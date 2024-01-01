/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 10:55:48 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/01/01 13:30:24 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_u(long nb, int *c)
{
	long	n;

	if (nb < 0)
		n = UINT_MAX + (long)nb + 1;
	else
		n = (long)nb;
	ft_putnbr_fd(n, 1, c);
}
