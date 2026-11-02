/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artbaudo <artbaudo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:44:47 by artbaudo          #+#    #+#             */
/*   Updated: 2026/11/02 16:04:18 by artbaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*res;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	res = malloc(len + 1);
	if (!res)
		return (0);
	res[len] = '\0';
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	return (res);
}
// int	main(void)
// {
// 	printf("strdup = %s\n", strdup("1"));
// 	printf("ft_strdup = %s\n", ft_strdup("1"));
// 	return (0);
// }