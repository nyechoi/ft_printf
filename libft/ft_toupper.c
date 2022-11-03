/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nye-eun- <nye-eun-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:47:43 by nye-eun-          #+#    #+#             */
/*   Updated: 2022/09/26 22:17:42 by nye-eun-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int argument)
{
	if (argument >= 'a' && argument <= 'z')
	{
		return (argument -32);
	}
	else
		return (argument);
}
