/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:41:47 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/11/12 16:31:32 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*index;
	t_list	*new_node;
	void	*node;

	if (lst == NULL || !f || !del)
		return (NULL);
	new_list = NULL;
	index = lst;
	while (index != NULL)
	{
		node = f(index->content);
		new_node = ft_lstnew(node);
		if (!new_node)
		{
			del (node);
			ft_lstclear(&new_list, (*del));
			return (new_list);
		}
		ft_lstadd_back(&new_list, new_node);
		index = index->next;
	}
	return (new_list);
}
// int main(void)
// {
// 	t_list *l = lstnew(strdup(" 1 2 3 "));
//     t_list *ret;
// 	l->next = lstnew(strdup("ss"));
// 	l->next->next = lstnew(strdup("-_-"));
// 	ret = ft_lstmap(l, lstmap_f, lstdel_f);
// }