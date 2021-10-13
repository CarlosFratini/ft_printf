/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linuxusr <linuxusr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:10:49 by linuxusr          #+#    #+#             */
/*   Updated: 2021/10/11 19:11:20 by linuxusr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_dec(int n)
{
	char	*s;
	size_t	len;

	s = ft_itoa(n);
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	free(s);
	return (len);
}
