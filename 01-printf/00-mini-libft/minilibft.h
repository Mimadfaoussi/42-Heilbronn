/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minilibft.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 08:53:53 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/11/26 10:33:53 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINILIBFT_H
# define MINILIBFT_H

# include <unistd.h>
#include <stdlib.h>

void	ft_putchar_fd(char c, int fd, int *count);
void	ft_putnbr_fd(int n, int fd, int *count);
void	ft_putstr_fd(char *s, int fd, int *count);
char	*ft_strdup(const char *str);

#endif