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
	size_t	len_d;
	size_t	len_s;
	size_t	res;


	len_s = ft_strlen(src);
	len_d = 0;
	while (len_d < size && dest[len_d])
		len_d++;
	res = len_s + size;
	if (size > len_d)
		res = len_d + len_s;
	if (size < 1)
		return (len_s + size);
	i = 0;
	while (src[i] && len_d < size - 1)
	{
		dest[len_d] = src[i];
		i++;
		len_d++;
	}
	if (len_d != size)
		dest[len_d] = '\0';
	return (res);
}

// int	main(void)
// {
// unsigned int	size = 1;
// char	src[]="w";
// char	dest[155]="hello";
// char	dest1[155]="hello";

// printf("ft_strlcat = %zu, %s,\n", ft_strlcat(dest1,src,size),dest1);
// printf("   strlcat = %zu, %s,\n", strlcat(dest,src,size),dest);
// return (0);
// }
