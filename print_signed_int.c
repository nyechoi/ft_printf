/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_signed_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nye-eun- <nye-eun-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:07:36 by nye-eun-          #+#    #+#             */
/*   Updated: 2022/11/01 22:59:25 by nye-eun-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_signed_int(int arg)
{
	char	*int_to_char;
	int		nbr;

	int_to_char = ft_itoa(arg);
	nbr = print_string(int_to_char);
	free(int_to_char);
	return (nbr);
}
