/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:57:42 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/12/30 08:52:59 by mfaoussi         ###   ########.fr       */
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

char	*hex_converter(int nb)
{
	int		mod;
	char	*result;
	char	*alpha;
	int		i;

	if (nb == 0)
		return (ft_strdup("0"));
	alpha = ft_strdup("0123456789ABCDEF");
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

// int main()
// {
// 	int	i = 0;
// 	printf("%s\n",hex_converter(i));
// 	printf("%x\n",i);
// 	return (0);
// }