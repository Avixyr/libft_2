/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artbaudo <artbaudo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:15:47 by artbaudo          #+#    #+#             */
/*   Updated: 2026/11/02 13:27:23 by artbaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) < *(unsigned char *)(s2 + i))
			return (-1);
		else if (*(unsigned char *)(s1 + i) > *(unsigned char *)(s2 + i))
			return (1);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("memcmp = %d\n", memcmp("caca","caca",2));
// 	printf("ft_memcmp = %d\n", ft_memcmp("caca","caca",2));
// 	return (0);
// }
