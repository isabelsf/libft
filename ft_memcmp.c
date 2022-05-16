/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misabel- <misabel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:55:53 by misabel-          #+#    #+#             */
/*   Updated: 2022/05/10 02:11:21 by misabel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_n;
	unsigned char	*s2_n;
	size_t			i;

	s1_n = (unsigned char *)s1;
	s2_n = (unsigned char *)s2;
	i = 0;
	while (n--)
	{
		if ((s1_n[i] != s2_n[i]))
			return (s1_n[i] - s2_n[i]);
		i++;
	}
	return (0);
}
