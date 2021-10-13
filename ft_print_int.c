/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linuxusr <linuxusr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:59:36 by linuxusr          #+#    #+#             */
/*   Updated: 2021/10/11 18:01:31 by linuxusr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_int(int n)
{
	char	*s;
	size_t	len;

	s = ft_itoa(n);
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	free(s);
	return (len);
}
