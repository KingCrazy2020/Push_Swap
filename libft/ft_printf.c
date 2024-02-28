/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thguimar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:03:08 by thguimar          #+#    #+#             */
/*   Updated: 2023/10/30 12:18:03 by thguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printf(const char *n_args, ...)
{
	int		i;
	int		x;
	va_list	arg;

	i = 0;
	x = 0;
	va_start (arg, n_args);
	while (n_args[i])
	{
		if (n_args[i] == '%')
		{
			x += ft_printf_arg(n_args[i + 1], arg);
			i++;
		}
		else
			x += ft_putchar(n_args[i]);
		i++;
	}
	va_end(arg);
	return (x);
}

int	ft_printf_arg(const char n_args, va_list arg)
{
	int	print;

	print = 0;
	if (n_args == 'c')
		print += ft_putchar(va_arg(arg, int));
	else if (n_args == 's')
		print += ft_printstr(va_arg(arg, char *));
	else if (n_args == 'p')
		print += ft_printptr(va_arg(arg, unsigned long long));
	else if (n_args == 'd' || n_args == 'i')
		print += ft_printnbr(va_arg(arg, int));
	else if (n_args == 'x' || n_args == 'X')
		print += ft_printhex(va_arg(arg, unsigned int), n_args);
	else if (n_args == 'u')
		print += ft_printuns(va_arg(arg, unsigned int));
	else if (n_args == '%')
		print += ft_printpercent();
	return (print);
}
