/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nye-eun- <nye-eun-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:29:14 by nye-eun-          #+#    #+#             */
/*   Updated: 2022/11/01 22:58:57 by nye-eun-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "libft/libft.h"

# define HEX_LW "0123456789abcdef"
# define HEX_UP "0123456789ABCDEF"

int				ft_printf(const char *format, ...);
unsigned int	selectformat(const char *format, va_list args);
int				print_char(int arg);
int				print_signed_int(int arg);
unsigned int	print_string(char *arg);
int				print_hex(unsigned long number, int format);
int				print_unsigned_int(unsigned int nb);
int				print_pointer(unsigned long int ptr);

#endif