/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artbaudo <artbaudo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:29:06 by artbaudo          #+#    #+#             */
/*   Updated: 2026/11/02 15:17:55 by artbaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*temp;
	size_t	i;

	i = 0;
	temp = (char *)src;
	while (i < n)
	{
		*(char *)(dest + i) = temp[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*dest;
// 	dest = malloc(100);
// 	str = malloc(100);
// 	strcpy(str,"hello");
// 	strcpy(dest,"1234567");
// 	printf("memmove = %s\n", (char *)memcpy(dest, str, 3));
// 	printf("ft_memmove = %s\n", (char *)ft_memcpy(dest, str, 3));
// 	return (0);
// }
