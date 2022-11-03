/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:34:19 by zbentalh          #+#    #+#             */
/*   Updated: 2022/11/01 16:57:14 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_help(char c, va_list tmp)
{
	int	i;

	i = 0;
	if (c == 'i' || c == 'd')
		i = ft_putnbr(va_arg(tmp, int));
	else if (c == 'c')
		i = ft_putchar((char )(va_arg(tmp, int)));
	else if (c == 's')
		i = ft_putstr(va_arg(tmp, char *));
	else if (c == 'x')
		i = ft_putnbr_x(va_arg(tmp, unsigned int));
	else if (c == 'X')
		i = ft_putnbr_xx(va_arg(tmp, unsigned int));
	else if (c == 'u')
		i = ft_putnbr_u(va_arg(tmp, unsigned int));
	else if (c == 'p')
	{
		i = ft_putstr("0x");
		i += ft_putnbr_a(va_arg(tmp, size_t));
	}
	else
		i = ft_putchar(c);
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	tmp;
	int		i;
	int		l;

	va_start(tmp, s);
	l = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] != '\0')
			l += ft_help(s[++i], tmp);
		else if (s[i] != '%' && s[i] != '\0')
			l += ft_putchar(s[i]);
		i++;
	}
	va_end(tmp);
	return (l);
}
