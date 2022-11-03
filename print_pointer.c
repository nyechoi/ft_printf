/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nye-eun- <nye-eun-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:13:14 by nye-eun-          #+#    #+#             */
/*   Updated: 2022/11/01 21:34:37 by nye-eun-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(unsigned long int ptr)
{
	int	ret;

	ret = 0;
	if (!ptr)
	{
		ret = ret + write(1, "(nil)", 5);
		return (ret);
	}
	else
	{
		ret = write(1, "0x", 2);
		ret = ret + print_hex(ptr, 'x');
	}
	return (ret);
}
