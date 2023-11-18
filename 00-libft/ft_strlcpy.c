/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:39:22 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/10/17 15:43:26 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	i;
	size_t	src_length;

	src_length = ft_strlen(src);
	if (!src || !dst)
		return (0);
	if (destsize > 0)
	{
		i = 0;
		while (src[i] != '\0' && (i < destsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_length);
}
// int main(void)
// {
// 	char	*dst;
// 	char	*src = "This is the cdejdc to copy from to dest";
// 	dst = malloc(ft_strlen(src));
// 	if (!dst)
// 		printf("perror");
// 	printf("%zu\n",ft_strlcpy(dst, src, ft_strlen(src)));
// 	printf("%zu\n",strlcpy(dst, src, ft_strlen(src)));
// 	return (0);
// }