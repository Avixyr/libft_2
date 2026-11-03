/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artbaudo <artbaudo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:01:59 by artbaudo          #+#    #+#             */
/*   Updated: 2026/11/03 11:01:59 by artbaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(s);
	res = malloc(len + 1);
	if (!res)
		return (0);
	res[len] = '\0';
	i = 0;
	while (i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}
