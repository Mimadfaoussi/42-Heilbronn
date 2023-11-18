/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:46:01 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/10/29 17:49:29 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c && s[i] != '\0')
		i++;
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
// int main(void)
// {
// 	char	*dst = "teste";
// 	char	c = '\0';

// 	printf("%p || %p\n",ft_strchr(dst, c),dst);
// 	printf("%p\n",strchr(dst, c));
// 	return (0);
// }
