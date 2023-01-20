/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megordag <megordag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:46:40 by megordag          #+#    #+#             */
/*   Updated: 2022/10/31 14:53:37 by megordag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_x(unsigned int nbr, int *a)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr < 16)
	{
		if (nbr < 10)
			*a += ft_putchar(nbr + '0');
		else
			*a += ft_putchar(base[nbr % 16]);
	}
	if (nbr >= 16)
	{
		ft_x(nbr / 16, a);
		ft_x(nbr % 16, a);
	}
	return (*a);
}
