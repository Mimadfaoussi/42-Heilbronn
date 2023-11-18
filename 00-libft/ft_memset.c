/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:08:48 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/11/16 10:01:15 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	char		*p;

	i = 0;
	p = (char *)b;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (b);
}
// int main(void)
// {
// 	void	*ptr;

// 	ptr = malloc(10);
// 	if (!ptr)
// 		printf("perror");
// 	printf("%s\n",ft_memset(ptr,98,59));
// 	printf("%s\n",memset(ptr,98,59));
// 	return (0);
// }