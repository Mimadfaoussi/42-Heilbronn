/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 09:16:36 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/11/13 08:56:00 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

// int main(void)
// {
// 	printf("%d\n",ft_isalpha(99));
// 	printf("%d\n",isalpha(99));
// }