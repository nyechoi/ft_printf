/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nye-eun- <nye-eun-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 00:54:57 by nye-eun-          #+#    #+#             */
/*   Updated: 2022/11/01 20:08:57 by nye-eun-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long number, int flag)
{
	int	count;

	count = 0;
	if (number >= 16)
	{
		count = count + print_hex((number / 16), flag);
		count = count + print_hex((number % 16), flag);
	}
	else
	{
		if (flag == 'x')
			return (print_char(HEX_LW[number]));
		else
			return (print_char(HEX_UP[number]));
	}
	return (count);
}
