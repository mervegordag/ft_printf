/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megordag <megordag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:33:23 by megordag          #+#    #+#             */
/*   Updated: 2022/11/09 15:48:31 by megordag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_upx(unsigned int nbr, int *i);
int		ft_x(unsigned int nbr, int *i);
int		ft_pointer(unsigned long nbr, int *a);
int		ft_printf(const char *str, ...);
int		ft_printstr(char *str);
int		ft_putnbr(int nbr, int *a);
int		ft_unsigned(unsigned int nbr, int *i);

#endif