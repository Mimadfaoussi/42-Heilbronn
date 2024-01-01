/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:11:32 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/01/01 13:21:10 by mfaoussi         ###   ########.fr       */
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
char			*hex_converter(unsigned long long nb, int mode);
int				hextcount(unsigned long long nb);
void			hexwrite(unsigned long long nb, int mode, int *count);
void			ft_putchar_fd(char c, int fd, int *count);
void			ft_putnbr_fd(long n, int fd, int *count);
void			ft_putstr_fd(char *s, int fd, int *count);
char			*ft_strdup(const char *str);
void			print_null(char *s, int fd, int *count);
unsigned int	checker(unsigned long long nb);
void			print_pointer(unsigned long long address, int *count);
void			print_u(long nb, int *c);

// void	ft_putchar_fd(char c, int fd);
// void	ft_putstr_fd(char *s, int fd);

#endif