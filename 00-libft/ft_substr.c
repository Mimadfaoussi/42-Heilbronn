/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:50:59 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/11/12 20:01:04 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*result;

	if (!s || *s == '\0' || len == 0 || ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}
