/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:24:58 by linuxusr          #+#    #+#             */
/*   Updated: 2021/10/05 19:21:14 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printformats(char c1, va_list args)
{
	int	len;

	len = 0;
	if (c1 == 'c')
		len = ft_putchar(va_arg(args, int));
	else if(c1 == 's')
		len = ft_putstr(va_arg(args, char *));
	else if(c1 == 'p')
		len = ft_putptr(va_arg(args, void *));
	else if(c1 == 'd')
		len = ft_putstr(ft_itoa(va_arg(args, int)));
	else if(c1 == 'i')
		len = ft_putstr(ft_itoa(va_arg(args, int)));
	else if(c1 == 'u')
		len = ft_putstr(ft_itoa(va_arg(args, int)));
	else if(c1 == 'x')
		len = ft_puthex((size_t)va_arg(args, int));
	else if(c1 == 'X')
		len = ft_putuphex((size_t)va_arg(args, int));
	else if(c1 == '%')
	{
		write(1, "%", 2);
		len++;
	}
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		len;
	int		i;

	i = 0;
	len = 0;
	va_start(args, s);
	while (s[i] != '\0')
	{
		if(s[i] == '%' && s[i + 1] != '\0')
		{
			len += ft_printformats(s[i + 1], args);
			i++;
		}
		else if(s[i] != '%')
		{
			ft_putchar(s[i]);
			len++;
		}
		i++;
	}
	return (len);
}
