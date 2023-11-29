/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:10:42 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/11/27 08:39:58 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "00-mini-libft/minilibft.h"

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
		ft_putstr_fd(hex_converter(va_arg(*list, int)), 1, c);
	else if (format[*i] == '%' && format[*i + 1] == 'x')
		ft_putstr_fd(hex_converter(va_arg(*list, int)), 1, c);
	else if (format[*i] == '%' && format[*i + 1] == '%')
		ft_putchar_fd('%', 1, c);
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
	return (count);
}

int main(void)
{
	int	i = ft_printf("He%d%d%d w%drld hex = %x , which is %s called %c \n",1,1,0,0,1222354,"vendetta",'V');
	//printf("",i);
	return (0);
}