/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:47:24 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/10/29 18:16:40 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	length;

	length = ft_strlen(s);
	while (length > 0)
	{
		if (s[length] == (char)c)
			return ((char *)s + length);
		length--;
	}
	if (s[0] == (char)c)
		return ((char *)s);
	return (NULL);
}
// int main(void)
// {
// 	char	dst[40] = "Hello, this X the char to fXindX";

// 	printf("%s\n",ft_strrchr(dst, 'X'));
// 	printf("%s\n",strrchr(dst, 'X'));
// 	return (0);
// }
