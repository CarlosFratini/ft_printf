/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:54:44 by ceduard2          #+#    #+#             */
/*   Updated: 2021/10/20 15:55:38 by ceduard2         ###   ########.fr       */
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
