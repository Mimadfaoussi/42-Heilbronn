/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:04:57 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/11/14 09:19:26 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dsize;
	size_t	i;

	dsize = ft_strlen(dst);
	if (dstsize <= dsize)
		return (dstsize + ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && dsize < dstsize - 1)
	{
		dst[dsize] = src[i];
		dsize++;
		i++;
	}
	dst[dsize] = '\0';
	return (dsize + ft_strlen(src + i));
}

// int main(void)
// {
// 	char	dst[20] = "Hello, ";
// 	char	*src = "world";
// 	char	dst2[20] = "Hello, ";
// 	// dst = malloc(ft_strlen(src));
// 	// if (!dst)
// 	// 	printf("perror");
// 	printf("%zu\n",ft_strlcat(dst, src, 20));
// 	printf("%zu\n",strlcat(dst2, src, 20));
// 	return (0);
// }
