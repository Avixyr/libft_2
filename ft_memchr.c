/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artbaudo <artbaudo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:19:49 by artbaudo          #+#    #+#             */
/*   Updated: 2026/11/02 12:41:48 by artbaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*s = "cPaca";
// 	printf("%c\n", -110000);
// 	printf("memchr = %s\nft_memchr = %s\n", (char *)memchr((void *)s, -110000, 5),  (char *)ft_memchr((void *)s, -110000, 5));
// 	return (0);
// }