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

static int  ft_help(char c, va_list tmp)
{
    int i;
    i = 0;
    if (c == 'i' || c == 'd')
        i = ft_putnbr(va_arg(tmp, int));
    if (c == 'c')
        i = ft_putchar(va_arg(tmp, char));
    if (c == 's')
        i = ft_putstr(va_arg(tmp, char *));
    if (c == 'x')
        i = ft_putnbr_x(va_arg(tmp, unsigned int));
    if (c == 'X')
        i = ft_putnbr_xx(va_arg(tmp, unsigned int));
    if (c == 'u')
        i = ft_putnbr_u(va_arg(tmp, unsigned int));
    if (c == 'p')
        i = ft_putstr("0x");
        i += ft_putnbr_x(va_arg(tmp, unsigned int));
    else
        i = ft_putchar(c);
    return (i);
}

int ft_printf(const char *s, ...)
{
    va_list tmp;
    int     i;

    while (s[i])
    {
        if (s[i++]= '%' && s[i] != '/0')
            ft_help(s[i++], tmp);
        if (s[i] != '%' && s[i] != '/0')
            ft_putchar(s[i]);
        i++;
    }
}