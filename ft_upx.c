/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megordag <megordag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:08:04 by megordag          #+#    #+#             */
/*   Updated: 2022/10/31 14:53:15 by megordag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_upx(unsigned int nbr, int *a)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (nbr < 16)
	{
		if (nbr < 10)
			*a += ft_putchar(nbr + '0');
		else
			*a += ft_putchar(base[nbr % 16]);
	}
	if (nbr >= 16)
	{
		ft_upx(nbr / 16, a);
		ft_upx(nbr % 16, a);
	}
	return (*a);
}
