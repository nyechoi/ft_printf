/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nye-eun- <nye-eun-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 00:30:26 by nye-eun-          #+#    #+#             */
/*   Updated: 2022/09/26 17:04:02 by nye-eun-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	c;
	size_t	k;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	c = 0;
	k = i;
	if (size <= i)
	{
		return (j + size);
	}
	else
	{
		while (i < size - 1 && src[c] != '\0')
		{
			dest[i] = ((char *)src)[c];
			i++;
			c++;
		}
	dest[i] = '\0';
	}
	return (k + j);
}
