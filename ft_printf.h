/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:36:37 by ltomasze          #+#    #+#             */
/*   Updated: 2024/03/22 18:17:13 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putarg(va_list args, const char format);
char	*ft_uint_in_str(char *s, unsigned int number, int len);
int		ft_len_int(int n);
char	*ft_itoa(int n);
int		ft_putnbr(int n);
int		len_ptr(size_t nb);
void	ft_put_ptr(size_t nb);
int		ft_putptr(size_t ptr);

#endif