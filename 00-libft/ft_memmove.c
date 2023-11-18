/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 09:48:28 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/10/29 11:55:52 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;
	size_t	i;

	dst2 = (char *)dst;
	src2 = (char *)src;
	i = 0;
	if (src == NULL && dst == NULL)
		return (dst);
	if (src >= dst)
	{
		while (i < len)
		{
			dst2[i] = src2[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
		{
			dst2[len] = src2[len];
		}
	}
	return (dst);
}
