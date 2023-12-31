/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:11:32 by mfaoussi          #+#    #+#             */
/*   Updated: 2023/12/31 17:49:01 by mfaoussi         ###   ########.fr       */
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
# include <limits.h>

int				ft_printf(const char *format, ...);
char			*hex_converter(unsigned int nb, int mode);
int				hextcount(unsigned int nb);
void			hexwrite(unsigned int nb, int mode, int *count);
void			ft_putchar_fd(char c, int fd, int *count);
void			ft_putnbr_fd(int n, int fd, int *count);
void			ft_putstr_fd(char *s, int fd, int *count);
char			*ft_strdup(const char *str);
void			print_null(char *s, int fd, int *count);
unsigned int	checker(unsigned int nb);
void			print_pointer(int *address, int *count);

// void	ft_putchar_fd(char c, int fd);
// void	ft_putstr_fd(char *s, int fd);

#endif