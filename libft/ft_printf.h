/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thguimar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:14:11 by thguimar          #+#    #+#             */
/*   Updated: 2023/11/03 17:18:47 by thguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include "libft.h"

//INT
int		ft_putchar(int c);
int		ft_printf(const char *n_args, ...);
int		ft_printf_arg(const char n_args, va_list arg);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printpercent(void);
int		ft_hexlen(unsigned int num);
int		ft_printhex(unsigned int num, const char n_args);
int		ft_ptrlen(uintptr_t num);
int		ft_printptr(unsigned long long ptr);
int		ft_numlen(unsigned int num);
int		ft_printuns(unsigned int n);
//VOID
void	ft_putstr(char *str);
void	ft_puthex(unsigned int num, const char n_args);
void	ft_putptr(uintptr_t num);
//CHAR
char	*ft_uitoa(unsigned int n);

#endif
