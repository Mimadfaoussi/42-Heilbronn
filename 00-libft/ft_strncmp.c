/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:51:07 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/10/28 16:46:41 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	nbs1;
	unsigned char	nbs2;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		nbs1 = (unsigned char)s1[i];
		nbs2 = (unsigned char)s2[i];
		if (nbs1 != nbs2)
			return (nbs1 - nbs2);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char	dst[40] = "";
// 	char	src[40] = "";

// 	printf("%d\n",ft_strncmp(dst,src,10));
// 	printf("%d\n",strncmp(dst,src,10));
// 	return (0);
// }
