/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 08:50:38 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/11/13 08:51:50 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*p;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
// int main(void)
// {
// 	void	*ptr;
// 	char	*s;
// 	ptr = malloc(99);
// 	ft_bzero(ptr,99);
// 	s = (char *)ptr;
// 	printf("%d\n",s[4000]);
// 	// bzero(ptr,99);
// 	// s = (char *)ptr;
// 	// printf("%d\n",s[40000]);
// 	return (0);
// }