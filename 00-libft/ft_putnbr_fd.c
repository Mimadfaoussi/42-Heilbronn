/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:49:22 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/10/22 17:49:57 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
			ft_putnbr_fd(n, fd);
		}
		else if (n >= 10)
		{
			c = (n % 10) + '0';
			ft_putnbr_fd(n / 10, fd);
			ft_putchar_fd(c, fd);
		}
		else if (n < 10)
			ft_putchar_fd(n + '0', fd);
	}
}
