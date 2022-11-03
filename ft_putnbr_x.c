/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr-x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:19:51 by zbentalh          #+#    #+#             */
/*   Updated: 2022/11/01 19:30:30 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

unsigned int	ft_putnbr_x(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 0)
	{
		i += ft_putchar ('-');
		n = -n;
		i += ft_putnbr_x (n);
	}
	else if (n > 15)
	{
		i += ft_putnbr_x (n / 16);
		i += ft_putnbr_x (n % 16);
	}
	else if (n <= 9)
		i += ft_putchar (n + 48);
	else
		i += ft_putchar (n + 87);
	return (i);
}
