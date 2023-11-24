/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:10:42 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/11/24 09:06:03 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		i;

	i = 0;
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == 's')
		{
			ft_putstr_fd(va_arg(list, char *), 1);
			i = i + 2;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			i++;
		}
	}
	return (0);
}

// int main(void)
// {
// 	ft_printf("just a test %s and %s\n","var1", "var2");
// 	return (0);
// }