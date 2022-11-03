/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nye-eun- <nye-eun-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 00:54:32 by nye-eun-          #+#    #+#             */
/*   Updated: 2022/11/01 22:58:24 by nye-eun-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	print_string(char *arg)
{
	if (arg == NULL)
		return (write(1, "(null)", 6));
	return (write(1, arg, ft_strlen(arg)));
}
