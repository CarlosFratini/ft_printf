/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:56:43 by ceduard2          #+#    #+#             */
/*   Updated: 2021/10/24 07:27:57 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_uint_to_char(char *s, unsigned int u, size_t len)
{
	size_t	i;

	i = len;
	s[i] = '\0';
	i--;
	while (u > 0)
	{
		s[i] = (u % 10) + '0';
		u = u / 10;
		i--;
	}
	return (s);
}

static size_t	ft_ulen(unsigned int u)
{
	size_t	len;

	len = 0;
	if (u == 0)
		len++;
	while (u != 0)
	{
		u = u / 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int u)
{
	char	*str;
	size_t	len;

	len = ft_ulen(u);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (u == 0)
		ft_strlcpy(str, "0", 2);
	else
		str = ft_uint_to_char(str, u, len);
	return (str);
}
