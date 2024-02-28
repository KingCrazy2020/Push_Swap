/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thguimar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:14:08 by thguimar          #+#    #+#             */
/*   Updated: 2023/11/03 15:29:40 by thguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlen(unsigned int num)
{
	int	len;

	len = 0;
	while (num)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_puthex(unsigned int num, const char n_args)
{
	if (num >= 16)
	{
		ft_puthex(num / 16, n_args);
		ft_puthex(num % 16, n_args);
	}
	else
	{
		if (num <= 9)
		{
			ft_putchar_fd((num + '0'), 1);
		}
		else
		{
			if (n_args == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (n_args == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	ft_printhex(unsigned int num, const char n_args)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_puthex(num, n_args);
	return (ft_hexlen(num));
}
