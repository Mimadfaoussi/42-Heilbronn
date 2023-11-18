/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:22:26 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/11/08 10:29:01 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*index;

	while (*lst != NULL)
	{
		index = *lst;
		*lst = (*lst)->next;
		index->next = NULL;
		del(index->content);
		free(index);
	}
	lst = NULL;
}
