/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linuxusr <linuxusr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:47:33 by linuxusr          #+#    #+#             */
/*   Updated: 2021/10/05 18:46:24 by linuxusr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(size_t n)
{
	char	hex;
	size_t	rmd;
	int		count;

	count = 0;
	rmd = 0;
	if(n != 0)
	{
		rmd = n%16;
		if(rmd >= 0 && rmd <= 9)
			hex = rmd + '0';
		else
		{
			rmd -= 10;
			hex = rmd + 'a';
		}
		count = ft_puthex(n/16);
		write(1, &hex, 1);
	}
	return (count + 1);
}
