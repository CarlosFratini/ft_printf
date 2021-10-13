/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intohex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linuxusr <linuxusr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:25:35 by linuxusr          #+#    #+#             */
/*   Updated: 2021/10/13 13:11:14 by linuxusr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	ft_convert_hex(char *s, unsigned long int n, size_t len)
{
	unsigned long int	rmd;
	size_t				i;

	i = len;
	s[i] = '\0';
	i--;
	while (n != 0)
	{
		rmd = n % 16;
		if(rmd >= 0 && rmd <= 9)
			s[i] = (char)(rmd + '0');
		else
			s[i] = (char)((rmd - 10) + 'a');
		n /= 16;
		i--;
	}
}

static size_t	ft_hexlen(unsigned long int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

char	*ft_intohex(unsigned long int n)
{
	char	*s;
	size_t	len;

	len = ft_hexlen(n);
	s = (char *)malloc(sizeof(*s) * (len + 1));
	if(s == NULL)
		return (NULL);
	if(n == 0)
		ft_strlcpy(s, "0", 2);
	else
		ft_convert_hex(s, n, len);
	return (s);
}
