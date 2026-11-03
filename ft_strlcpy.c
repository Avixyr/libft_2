/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artbaudo <artbaudo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:51:44 by artbaudo          #+#    #+#             */
/*   Updated: 2026/11/02 16:03:50 by artbaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size < 1)
		return (ft_strlen(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
// int	main(void)
// {
// unsigned int	size = 19;
// char	src[]="0123456789";
// char	src1[]="0123456789";
// char	dest[]="hello";
// char	dest1[]="hello";

// printf("ft_strlcpy  = %zu, %s,\n", ft_strlcpy(dest1,src1,size),dest1);
// printf("strlcpy = %zu, %s,\n", strlcpy(dest,src,size),dest);
// return (0);
// }
