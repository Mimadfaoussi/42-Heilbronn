/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:49:22 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/11/25 09:35:21 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibft.h"

static void	negative(int *count, int fd)
{
	ft_putstr_fd("-2147483648", fd, count);
	*count = *count + 11;
}

void	ft_putnbr_fd(int n, int fd, int *count)
{
	char	c;

	if (n == -2147483648)
		negative(count, fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd, count);
			n = -n;
			ft_putnbr_fd(n, fd, count);
			count++;
		}
		else if (n >= 10)
		{
			c = (n % 10) + '0';
			ft_putnbr_fd(n / 10, fd, count);
			ft_putchar_fd(c, fd, count);
		}
		else if (n < 10)
			ft_putchar_fd(n + '0', fd, count);
	}
}
