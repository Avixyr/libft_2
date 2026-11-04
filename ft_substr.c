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
	size_t	i;

	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = malloc(len + 1);
	sub[len]= '\0';
	if (!sub)
		return (0);
	i = 0;
	while (s[start] && i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	return (sub);
}

// int	main(void)
// {
// 	char s[] = "tripouille";
// 	char	*x;

// 	x =  ft_substr(s,5, SIZE_MAX);
// 	printf("%s\n",x);
// 	free(x);
// }