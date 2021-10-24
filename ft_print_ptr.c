/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:54:50 by ceduard2          #+#    #+#             */
/*   Updated: 2021/10/20 15:55:29 by ceduard2         ###   ########.fr       */
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
	s = ft_ptox(n);
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	free(s);
	return (len + 2);
}
