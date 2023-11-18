/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:37:07 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/10/18 12:01:14 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		length1;
	int		length2;

	length1 = ft_strlen(s1);
	length2 = ft_strlen(s2);
	newstr = malloc(length1 + length2 + 1);
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1, length1 + 1);
	ft_strlcpy(newstr + length1, s2, length2 + 1);
	newstr[length1 + length2] = '\0';
	return (newstr);
}
// int main()
// {
// 	char *s = "123456";
// 	char *s2 = "0123654 x";
// 	char *s3;

// 	s3 = ft_strjoin(s,s2);
// 	printf("%s\n",s3);
// 	return (0);
// }