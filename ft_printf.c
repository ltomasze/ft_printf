/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:22:28 by ltomasze          #+#    #+#             */
/*   Updated: 2024/03/22 17:48:48 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putarg(va_list args, const char format)
{
	int	result;

	result = 0;
	if (format == 'c')
		result = result + ft_putchar(va_arg(args, int));
	else if (format == 's')
		result = result + ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		result = result + ft_putnbr(va_arg(args, int));
	else if (format == 'p')
		result = result + ft_putptr(va_arg(args, intptr_t));
	return (result);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		result;

	i = 0;
	result = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			result = result + ft_putarg(args, format[i + 1]);
			i++;
		}
		else
			result = result + ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (result);
}
/*
int	main(void)
{
	ft_printf("hello my name is %s and first letter of my name \
is %c, bye.\n", "Lukas", 'L');
	return (0);
}
*/