/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:11:32 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/12/30 09:15:38 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <ctype.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
char	*hex_converter(int nb);
int		hextcount(int nb);
void	ft_putchar_fd(char c, int fd, int *count);
void	ft_putnbr_fd(int n, int fd, int *count);
void	ft_putstr_fd(char *s, int fd, int *count);
char	*ft_strdup(const char *str);
void	print_null(char *s, int fd, int *count);

// void	ft_putchar_fd(char c, int fd);
// void	ft_putstr_fd(char *s, int fd);

#endif