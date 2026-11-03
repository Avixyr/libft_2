/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artbaudo <artbaudo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:50:06 by artbaudo          #+#    #+#             */
/*   Updated: 2026/11/02 16:03:58 by artbaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_d;
	size_t	len_s;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dest);
	if (size < 1)
		return (len_s + size);
	i = 0;
	j = len_d;
	while (src[i] && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	if (size > len_d)
		return (len_d + len_s);
	return (len_s + size);
}

// int	main(void)
// {
// unsigned int	size = 19;
// char	src[]="0123456789";
// char	dest[155]="hello";
// char	dest1[155]="hello";

// printf("ft_strlcat  = %zu, %s,\n", ft_strlcat(dest1,src,size),dest1);
// printf("strlcat = %zu, %s,\n", strlcat(dest,src,size),dest);
// return (0);
// }
