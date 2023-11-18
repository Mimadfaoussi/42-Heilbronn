/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:57:51 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/11/16 10:02:26 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
// int main(void)
// {
// 	char *s = "what is this where is this who is this feiojfe    dwijsiowjs";
// 	printf("%zu\n",ft_strlen(s));
// 	printf("%zu\n",strlen(s));
// 	return (0);
// }