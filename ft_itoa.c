/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artbaudo <artbaudo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:08:12 by artbaudo          #+#    #+#             */
/*   Updated: 2026/11/03 10:08:12 by artbaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_nblen(int n)
{
	int	len;

	len = 1;
	while (n > 10 || n < -10)
	{
		len++;
		n = n /10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*res;
	int				len;
	int				sign;
	unsigned int	buff;

	sign = 0;
	buff = n;
	if (n < 0)
	{
		sign = 1;
		buff = -buff;
	}
	len = ft_nblen(n);
	res = malloc(len + sign + 1);
	if (!res)
		return (0);
	res[len + sign] = '\0';
	if (n < 0)
		res[0] = '-';
	while (len-- > 0)
	{
		res[len  + sign] = buff % 10 + '0';
		buff = buff / 10;
	}
	return (res);
}

// int	main(void)
// {
// 	char 	*s;

// 	s = ft_itoa(0);
// 	printf("%s\n", s);
// 	s = ft_itoa(-1);
// 	printf("%s\n", s);
// 	s = ft_itoa(-42);
// 	printf("%s\n", s);
// 	s = ft_itoa(123);
// 	printf("%s\n", s);
// 	s = ft_itoa(-2147483648);
// 	printf("%s\n", s);
// 	s = ft_itoa(2147483647);
// 	printf("%s\n", s);
// 	free(s);
// }