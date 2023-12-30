/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:10:42 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/12/30 11:03:40 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	format_specifier(const char *format, int *i, va_list *list, int *c)
{
	if (format[*i] == '%' && format[*i + 1] == 'd')
		ft_putnbr_fd(va_arg(*list, int), 1, c);
	else if (format[*i] == '%' && format[*i + 1] == 's')
		ft_putstr_fd(va_arg(*list, char *), 1, c);
	else if (format[*i] == '%' && format[*i + 1] == 'c')
		ft_putchar_fd(va_arg(*list, int), 1, c);
	else if (format[*i] == '%' && format[*i + 1] == 'f')
		ft_putnbr_fd(va_arg(*list, double), 1, c);
	else if (format[*i] == '%' && format[*i + 1] == 'X')
		ft_putstr_fd(hex_converter(va_arg(*list, int), 1), 1, c);
	else if (format[*i] == '%' && format[*i + 1] == 'x')
		ft_putstr_fd(hex_converter(va_arg(*list, int), 2), 1, c);
	else if (format[*i] == '%' && format[*i + 1] == '%')
		ft_putchar_fd('%', 1, c);
	else
	{
		*i = *i + 1;
		return ;
	}
	*i = *i + 2;
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
			format_specifier(format, &i, &list, &count);
		else
		{
			ft_putchar_fd(format[i], 1, &count);
			i++;
		}
	}
	va_end(list);
	return (count);
}

// int main(void)
// {
// 	unsigned int	i = ft_printf("%X\n", INT_MAX - 154 + 1);
// 	int j = printf("%X\n",-154);
// 	printf("%d\n%d\n",i,j);
// 	return (0);
// }