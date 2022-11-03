/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nye-eun- <nye-eun-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 21:59:04 by nye-eun-          #+#    #+#             */
/*   Updated: 2022/09/26 19:28:00 by nye-eun-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	else
	{
		while (index < (size - 1) && index < (ft_strlen(src)))
		{
			dest[index] = ((char *)src)[index];
			index++;
		}
	}
	dest[index] = '\0';
	return (ft_strlen(src));
}
