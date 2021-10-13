/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linuxusr <linuxusr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:28:19 by linuxusr          #+#    #+#             */
/*   Updated: 2021/10/13 13:13:42 by linuxusr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

size_t	ft_print_ptr(void *p)
{
	char	*s;
	size_t	len;
	unsigned long int	n;

	n = (unsigned long int)p;
	s = ft_intohex(n);
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	free(s);
	return (len + 2);
}
