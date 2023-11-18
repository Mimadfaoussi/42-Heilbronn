/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 09:35:06 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/10/28 16:55:37 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst2;
	char		*src2;

	dst2 = (char *) dst;
	src2 = (char *) src;
	if (!dst2 && !src2)
		return (dst);
	i = 0;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}
// int main(void)
// {
// 	void	*dst;
// 	void	*ssrc;
// 	void	*result;
// 	char	*src = "this is a shit amd how are we";

// 	dst = malloc(10);
// 	ssrc = (void *)src;
// 	if (!dst)
// 		printf("error\n");
// 	result = ft_memcpy(dst,ssrc,10);
// 	//result = memcpy(dst,ssrc,10);
// 	result = (char *)result;
// 	printf("%s",result);
// 	return (0);
// 	//printf("%d\n",isalnum(123));
// }