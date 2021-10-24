/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:56:31 by ceduard2          #+#    #+#             */
/*   Updated: 2021/10/20 15:56:32 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_ptr_to_hex(char *s, unsigned long int n, size_t len)
{
	unsigned int	rmd;
	size_t			i;

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

static size_t	ft_ptr_len(unsigned long int n)
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

char	*ft_ptox(unsigned long int n)
{
	char	*s;
	size_t	len;

	len = ft_ptr_len(n);
	s = (char *)malloc(sizeof(*s) * (len + 1));
	if(s == NULL)
		return (NULL);
	if(n == 0)
		ft_strlcpy(s, "0", 2);
	else
		ft_ptr_to_hex(s, n, len);
	return (s);
}
