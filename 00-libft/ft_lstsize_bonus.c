/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:37:44 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/11/08 09:40:29 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*index;
	int		size;

	if (lst == NULL)
		return (0);
	size = 0;
	index = lst;
	while (index != NULL)
	{
		size++;
		index = index->next;
	}
	return (size);
}
