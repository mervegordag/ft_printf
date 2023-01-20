/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megordag <megordag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:47:37 by megordag          #+#    #+#             */
/*   Updated: 2022/10/31 14:52:08 by megordag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr, int *a)
{
	if (nbr == -2147483648)
	{
		*a += ft_putchar('-');
		nbr = nbr / 10;
		ft_putnbr(-nbr, a);
		*a += ft_putchar('8');
	}
	else if (nbr < 0)
	{
		*a += ft_putchar('-');
		ft_putnbr(-nbr, a);
	}
	else
	{
		if (nbr > 9)
			ft_putnbr(nbr / 10, a);
		*a += ft_putchar('0' + (nbr % 10));
	}
	return (*a);
}
