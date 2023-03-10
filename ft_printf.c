/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megordag <megordag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:16:25 by megordag          #+#    #+#             */
/*   Updated: 2022/10/31 14:54:47 by megordag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(va_list arg, const char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		i += ft_printstr(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(arg, int), &i);
	else if (c == 'u')
		ft_unsigned(va_arg(arg, unsigned int), &i);
	else if (c == '%')
		i += ft_putchar('%');
	else if (c == 'p')
	{
		i += write (1, "0x", 2);
		ft_pointer(va_arg(arg, unsigned long), &i);
	}
	else if (c == 'x')
		ft_x(va_arg(arg, unsigned int), &i);
	else if (c == 'X')
		ft_upx(va_arg(arg, unsigned int), &i);
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(arg, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i])
		{
			i++;
			len += ft_check(arg, s[i]);
		}
		else
			len += ft_putchar(s[i]);
		i++;
	}
	va_end(arg);
	return (len);
}
