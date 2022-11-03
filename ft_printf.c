/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nye-eun- <nye-eun-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:18:37 by nye-eun-          #+#    #+#             */
/*   Updated: 2022/11/01 22:59:53 by nye-eun-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	selectformat(const char *format, va_list args)
{
	if (*format == 'c')
		return (print_char(va_arg(args, int)));
	if (*format == 'd' || *format == 'i')
		return (print_signed_int(va_arg(args, int)));
	if (*format == 'u')
		return (print_unsigned_int(va_arg(args, unsigned int)));
	if (*format == 's')
		return (print_string(va_arg(args, char *)));
	if (*format == 'p')
		return (print_pointer(va_arg(args, unsigned long int)));
	if (*format == 'x' || *format == 'X')
		return (print_hex(va_arg(args, unsigned int), *format));
	if (*format == '%')
		return (print_char('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed;
	int		i;

	i = 0;
	printed = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			printed += selectformat(format, args);
		}
		else
			printed += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (printed);
}
