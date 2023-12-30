/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:57:42 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/12/30 10:58:35 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hextcount(int nb)
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

int	checker(int nb)
{
	if (nb < 0)
	{
		nb = INT_MAX + nb;
	}
	return (nb);
}
// mode 1 for UPPERCASE
// else for lowercase

char	*hex_converter(int nb, int mode)
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
