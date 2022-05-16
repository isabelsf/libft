/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misabel- <misabel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:49:49 by misabel-          #+#    #+#             */
/*   Updated: 2022/05/11 02:40:12 by misabel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_new;

	i = 0;
	s_new = (unsigned char *)s;
	while (i != n)
	{
		if (s_new[i] == (unsigned char)c)
			return (&s_new[i]);
		i++;
	}
	return (NULL);
}
