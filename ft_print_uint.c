/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linuxusr <linuxusr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:18:45 by linuxusr          #+#    #+#             */
/*   Updated: 2021/10/11 19:10:15 by linuxusr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_uint(unsigned int u)
{
	char	*s;
	size_t	len;

	s = ft_uitoa(u);
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	free(s);
	return (len);
}
