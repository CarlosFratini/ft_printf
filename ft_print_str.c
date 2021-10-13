/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linuxusr <linuxusr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:01:02 by linuxusr          #+#    #+#             */
/*   Updated: 2021/10/08 15:03:48 by linuxusr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_str(char *s)
{
	if(s != NULL)
	{
		ft_putstr_fd(s, 1);
		return (ft_strlen(s));
	}
	ft_putstr_fd("(null)", 1);
	return (ft_strlen("(null)"));
}
