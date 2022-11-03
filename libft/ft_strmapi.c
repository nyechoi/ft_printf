/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nye-eun- <nye-eun-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:49:47 by nye-eun-          #+#    #+#             */
/*   Updated: 2022/09/26 19:27:52 by nye-eun-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*nwstr;

	i = 0;
	nwstr = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!nwstr)
		return (NULL);
	while (s[i] != '\0')
	{
		nwstr[i] = f(i, s[i]);
		i++;
	}
	return (nwstr);
}
