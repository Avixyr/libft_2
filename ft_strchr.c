/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artbaudo <artbaudo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:41:24 by artbaudo          #+#    #+#             */
/*   Updated: 2026/11/02 16:01:49 by artbaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (c == s[i])
		return ((char *)s + i);
	return (0);
}
// int	main(void)
// {
// 	printf("strchr = %s\n", strchr("abcdef",'g'));
// 	printf("ft_strchr = %s\n",ft_strchr("abcdef",'g'));
// 	return (0);
// }
