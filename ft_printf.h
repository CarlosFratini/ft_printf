/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linuxusr <linuxusr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:34:18 by linuxusr          #+#    #+#             */
/*   Updated: 2021/10/05 18:47:59 by linuxusr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

size_t	ft_strlen(const char *s);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putptr(void *p);
int		ft_puthex(size_t n);
int		ft_printf(const char *s, ...);

#endif
