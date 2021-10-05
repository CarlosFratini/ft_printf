/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linuxusr <linuxusr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:21:01 by linuxusr          #+#    #+#             */
/*   Updated: 2021/10/05 18:46:48 by linuxusr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p)
{
	size_t	size;
	int		count;

	size = (size_t)p;
	count = 0;
	write(1, "0x", 3);
	count = ft_puthex(size);
	return (count + 2);
}
