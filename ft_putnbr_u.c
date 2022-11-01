/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_punbr_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:16:19 by zbentalh          #+#    #+#             */
/*   Updated: 2022/11/01 19:17:36 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbr_u(unsigned int n)
{
	unsigned int i;
	i = 0;
	else if (n < 0)
	{
		i += ft_putchar ('-');
		n = -n;
		i += ft_putnbr_u (n);
	}
	else if (n > 9)
	{
		i += ft_putnbr_u (n / 10);
		i += ft_putnbr_u (n % 10);
	}
	else
	{
		i += ft_putchar (n + 48);
	}
	return (i);
}

