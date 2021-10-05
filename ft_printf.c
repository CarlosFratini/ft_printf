/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linuxusr <linuxusr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:24:58 by linuxusr          #+#    #+#             */
/*   Updated: 2021/10/05 18:48:15 by linuxusr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printformats(char c1, char c2, va_list args)
{
	int	len;

	len = 0;
	if (c1 == '%' && c2 == 'c')
		len = ft_putchar(va_arg(args, int));
	else if(c1 == '%' && c2 == 's')
		len = ft_putstr(va_arg(args, char *));
	else if(c1 == '%' && c2 == 'p')
		len = ft_putptr(va_arg(args, void *));
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
			len += ft_printformats(s[i], s[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar(s[i]);
			len++;
		}
		i++;
	}
	return (len);
}
