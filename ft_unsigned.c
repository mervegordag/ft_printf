/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megordag <megordag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:09:16 by megordag          #+#    #+#             */
/*   Updated: 2022/10/31 14:45:38 by megordag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int nbr, int *i)
{
	if (nbr <= 9 && nbr >= 0)
		*i += ft_putchar(nbr + '0');
	if (nbr > 9)
	{
		ft_unsigned(nbr / 10, i);
		ft_unsigned(nbr % 10, i);
	}
	return (*i);
}
