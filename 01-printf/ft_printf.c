/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:10:42 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/11/24 11:11:25 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "../00-libft/libft.h"

static void	format_specifier(const char *format, int *i, va_list *list)
{
	if (format[*i] == '%' && format[*i + 1] == 'd')
		ft_putnbr_fd(va_arg(*list, int), 1);
	else if (format[*i] == '%' && format[*i + 1] == 's')
		ft_putstr_fd(va_arg(*list, char *), 1);
	else if (format[*i] == '%' && format[*i + 1] == 'c')
		ft_putchar_fd(va_arg(*list, int), 1);
	else if (format[*i] == '%' && format[*i + 1] == 'f')
		ft_putnbr_fd(va_arg(*list, double), 1);
	*i = *i + 2;
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		i;

	i = 0;
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
			format_specifier(format, &i, &list);
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
// 	ft_printf("just a test %s and %s\n and another number %d which is %f\n plus this cute %c\n","var1", "var2", 16, 1.6, 'V');
// 	return (0);
// }