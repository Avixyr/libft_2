/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artbaudo <artbaudo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:34:47 by artbaudo          #+#    #+#             */
/*   Updated: 2026/11/02 16:40:38 by artbaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	i;

	mem = malloc(nmemb * size);
	if (!mem)
		return (0);
	i = 0;
	while (i < nmemb * size)
	{
		*(char *)(mem + i) = 0;
		i++;
	}
	return (mem);
}

// int	main(void)
// {
// 	printf("ok %p\n", calloc(3, 0));
// 	printf("ik %p\n", ft_calloc(3, 0));
// 	free(ft_calloc(3,0));
// 	free(calloc(3,0));
// 	return (0);
// }