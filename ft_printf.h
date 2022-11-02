/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:11:55 by zbentalh          #+#    #+#             */
/*   Updated: 2022/11/01 17:11:59 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int             ft_printf(const char *s, ...); 
int             ft_putnbr(int i);
int             ft_putchar(char c);
unsigned int	ft_putnbr_x(unsigned int n);
unsigned int	ft_putnbr_xx(unsigned int n);
unsigned int    ft_putnbr_u(unsigned int n);
int             ft_putstr(char *str);

#endif