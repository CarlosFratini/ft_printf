/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linuxusr <linuxusr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:34:18 by linuxusr          #+#    #+#             */
/*   Updated: 2021/10/13 14:28:23 by linuxusr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

size_t	ft_print_char(int n);
size_t	ft_print_str(char *s);
size_t	ft_print_ptr(void *p);
size_t	ft_print_int(int n);
size_t	ft_print_uint(unsigned int u);
size_t	ft_print_hex(unsigned int n);
size_t	ft_print_uhex(unsigned int n);
int		ft_printf(const char *s, ...);

#endif
