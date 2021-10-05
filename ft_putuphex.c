/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuphex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linuxusr <linuxusr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:47:33 by linuxusr          #+#    #+#             */
/*   Updated: 2021/10/05 18:46:36 by linuxusr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuphex(size_t n)
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
			hex = rmd + 'A';
		}
		count = ft_puthex(n/16);
		write(1, &hex, 1);
	}
	return (count + 1);
}
