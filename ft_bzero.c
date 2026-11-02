/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artbaudo <artbaudo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:19:14 by artbaudo          #+#    #+#             */
/*   Updated: 2026/11/02 11:34:36 by artbaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}

// int	main(void)
// {
// 	char *s1 = strdup("hello");
// 	char *s2 = strdup("hello");
// 	bzero(s1, 2);
// 	ft_bzero(s2, 2);
// 	printf("bzero = %s\n",s1);
// 	printf("ft_bzero = %s\n",s2);
// 	return (0);
// }