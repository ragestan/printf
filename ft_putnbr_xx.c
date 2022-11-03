/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:37:48 by zbentalh          #+#    #+#             */
/*   Updated: 2022/11/01 19:38:26 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbr_xx(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 0)
	{
		i += ft_putchar ('-');
		n = -n;
		i += ft_putnbr_xx (n);
	}
	else if (n > 15)
	{
		i += ft_putnbr_xx (n / 16);
		i += ft_putnbr_xx (n % 16);
	}
	else if (n <= 9)
		i += ft_putchar (n + 48);
	else
		i += ft_putchar (n + 55);
	return (i);
}
