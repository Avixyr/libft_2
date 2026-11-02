/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artbaudo <artbaudo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:30:52 by artbaudo          #+#    #+#             */
/*   Updated: 2026/11/02 15:17:42 by artbaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	size_t	i;

	i = 0;
	temp = (char *)src;
	if (src < dest)
	{
		while (n > 0)
		{
			*(char *)(dest + n - 1) = temp[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			*(char *)(dest + i) = temp[i];
			i++;
		}
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
// 	printf("memmove = %s\n", (char *)memmove(dest, str, 3));
// 	printf("ft_memmove = %s\n", (char *)ft_memmove(dest, str, 3));
// 	return (0);
// }
