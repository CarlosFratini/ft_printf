/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uhex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linuxusr <linuxusr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:44:27 by linuxusr          #+#    #+#             */
/*   Updated: 2021/10/11 18:52:02 by linuxusr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_uhex(ssize_t n)
{
	int		i;
	char	*s;
	size_t	len;

	i = 0;
	s = ft_intohex(n);
	while(s[i] != '\0')
	{
		s[i] = ft_toupper(s[i]);
		i++;
	}
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	free(s);
	return (len);
}
