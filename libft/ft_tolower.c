/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nye-eun- <nye-eun-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:56:03 by nye-eun-          #+#    #+#             */
/*   Updated: 2022/09/26 19:26:19 by nye-eun-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int argument)
{
	if (argument >= 'A' && argument <= 'Z')
	{
		return (argument +32);
	}
	else
		return (argument);
}
