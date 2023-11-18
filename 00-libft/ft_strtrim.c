/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 07:11:40 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/11/16 10:04:08 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*result;
	int		size;

	if (*s1 == '\0' || *set == '\0')
		return (ft_strdup(s1));
	i = 0;
	len = ft_strlen(s1) - 1;
	while (check(s1[i], set) == 1)
		i++;
	while (check(s1[len], set) == 1 && len >= i)
		len--;
	size = len - i + 1;
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1 + i, size + 1);
	return (result);
}
// int main(void)
// {
// 	char 	s1[] = "         ";
// 	char	*s2 = ft_strtrim(s1," ");
// 	printf("%s\n",s2);
// 	return (0);
// }
