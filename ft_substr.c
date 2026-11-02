/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artbaudo <artbaudo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:25:43 by artbaudo          #+#    #+#             */
/*   Updated: 2026/11/02 17:39:15 by artbaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	sub = malloc(len + 1);
	if (!sub)
		return (0);
	sub[len] = '\0';
	i = 0;
	while (s[start + i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}

// int	main(void)
// {
// 	char s[] = "0123456";
// 	printf("%s\n", ft_substr(s, 3, 2));
// }