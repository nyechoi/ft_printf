/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nye-eun- <nye-eun-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:10:27 by nye-eun-          #+#    #+#             */
/*   Updated: 2022/11/02 00:09:18 by nye-eun-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned_int(unsigned int nb)
{
	unsigned int	nbr;

	nbr = 0;
	if (nb <= 9)
		nbr = print_char(nb + 48);
	else
	{
		nbr += print_unsigned_int(nb / 10);
		nbr += print_char((char)(nb % 10 + 48));
	}
	return (nbr);
}
