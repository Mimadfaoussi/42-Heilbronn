/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:57:42 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/12/30 14:48:07 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//counts the number of bytes we need to represent hex

int	hextcount(unsigned int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb = nb / 16;
		i++;
	}
	return (i + 1);
}
// will check if number is negative and prepare it 

unsigned int	checker(unsigned int nb)
{
	if (nb < 0)
	{
		nb = UINT_MAX + nb;
	}
	return (nb);
}
// mode 1 for UPPERCASE
// else for lowercase

char	*hex_converter(unsigned int nb, int mode)
{
	int		mod;
	char	*result;
	char	*alpha;
	int		i;

	nb = checker(nb);
	if (nb == 0)
		return (ft_strdup("0"));
	if (mode == 1)
		alpha = ft_strdup("0123456789ABCDEF");
	else
		alpha = ft_strdup("0123456789abcdef");
	result = malloc(sizeof(char) * hextcount(nb));
	if (!result)
		return (NULL);
	i = hextcount(nb) - 2;
	result[i + 1] = '\0';
	while (nb > 0)
	{
		mod = nb % 16;
		result[i] = alpha[mod];
		i--;
		nb = nb / 16;
	}
	return (result);
}
// void	hexwrite(unsigned int nb, int mode, int fd, int *count)
// {
// 	char	*hex;
// }
// ft_putstr_fd(hex_converter(va_arg(*list, unsigned long), 1), 1, c);