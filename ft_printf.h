/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:54:20 by ceduard2          #+#    #+#             */
/*   Updated: 2021/10/20 15:55:34 by ceduard2         ###   ########.fr       */
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
