/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:04:29 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/11/26 10:30:51 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;
	int		i;

	i = 0;
	while (str[i])
		i++;
	ptr = malloc(sizeof(char) * i + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// int main (void)
// {
// 	const char  *s1 = "this is the created string ";
// 	char		*s2;
// 	char		*s3;
// 	s2 = ft_strdup(s1);
// 	s3 = strdup(s1);
// 	printf("%s\n",s2);
// 	printf("%s\n",s3);
// 	return (0);
// }