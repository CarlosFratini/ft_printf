/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linuxusr <linuxusr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:06:14 by ceduard2          #+#    #+#             */
/*   Updated: 2021/10/13 12:14:25 by linuxusr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*ft_int_to_char(char *s, int n, size_t len)
{
	size_t	i;

	i = len;
	s[i] = '\0';
	i--;
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		s[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (s);
}

static size_t	ft_nlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = ft_nlen(n);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	if(n == 0)
		ft_strlcpy(str, "0", 2);
	else if(n == -2147483648)
		ft_strlcpy(str, "-2147483648", 12);
	else
		str = ft_int_to_char(str, n, len);
	return (str);
}
