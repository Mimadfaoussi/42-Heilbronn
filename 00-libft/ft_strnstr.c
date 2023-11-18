/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:49:54 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/11/16 10:03:18 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_same(const char *hay, const char *needle, size_t i, size_t len)
{
	size_t	j;
	int		b;

	j = 0;
	b = 0;
	while (hay[j] == needle[j] && i < len && hay[j] != '\0')
	{
		j++;
		i++;
	}
	if (j == ft_strlen(needle))
		return (j);
	return (-1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	ptvalue;
	char	*ptr;

	i = 0;
	ptr = (char *)haystack;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			ptvalue = i;
			if (is_same((haystack + i), needle, i, len) > 0)
			{
				ptr = (char *)haystack + ptvalue;
				return (ptr);
			}
			i = ptvalue;
		}
		i++;
	}
	return (NULL);
}
// int main(void)
// {
// 	char	dst[40] = "This is a fuckking randomn text";
// 	char	src[40] = "xt";
// 	char	*x = ft_strnstr(dst,src,35);
// 	char	*xx = strnstr(dst,src,35);
// 	printf("%s\n",x);
// 	printf("%s\n",xx);
// 	return (0);
// }