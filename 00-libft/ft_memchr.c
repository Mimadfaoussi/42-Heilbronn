/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:04:26 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/10/29 12:25:19 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	byte;
	size_t			i;

	p = (unsigned char *)s;
	byte = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == byte)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
// int main(void)
// {
// 	char	dst[40] = "This is a fuckking randomn text";
// 	char	src[40] = "";
// 	char	*x = ft_memchr(dst,'k',20);
// 	char	*xx = (char *)memchr(dst,'k',20);
// 	printf("%s\n",x);
// 	printf("%s\n",xx);
// 	return (0);
// }
