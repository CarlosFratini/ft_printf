/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:54:10 by ceduard2          #+#    #+#             */
/*   Updated: 2021/10/20 15:55:35 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_printformats(char c1, va_list args)
{
	size_t	len;

	len = 0;
	if (c1 == 'c')
		len = ft_print_char(va_arg(args, int));
	else if(c1 == 's')
		len = ft_print_str(va_arg(args, char *));
	else if(c1 == 'p')
		len = ft_print_ptr(va_arg(args, void *));
	else if(c1 == 'd')
		len = ft_print_int(va_arg(args, int));
	else if(c1 == 'i')
		len = ft_print_int(va_arg(args, int));
	else if(c1 == 'u')
		len = ft_print_uint(va_arg(args, unsigned int));
	else if(c1 == 'x')
		len = ft_print_hex(va_arg(args, unsigned int));
	else if(c1 == 'X')
		len = ft_print_uhex(va_arg(args, unsigned int));
	else if(c1 == '%')
		len = ft_print_char('%');
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	size_t	len;
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
			ft_putchar_fd(s[i], 1);
			len++;
		}
		i++;
	}
	return (len);
}
