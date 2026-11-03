/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artbaudo <artbaudo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:31:45 by artbaudo          #+#    #+#             */
/*   Updated: 2026/11/02 15:15:56 by artbaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = (char)c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char str1[7]="aabbcc";
// 	char str2[7] = "aabbcc";
// 	printf("memset = %s\n", (char *)memset(str1, 'q', 3));
// 	printf("ft_memset = %s\n", (char *)ft_memset(str2, 'q', 3));
// 	return (0);
// }