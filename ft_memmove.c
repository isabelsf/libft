/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misabel- <misabel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:04:30 by misabel-          #+#    #+#             */
/*   Updated: 2022/05/10 19:02:26 by misabel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src_new;
	unsigned char	*dest_new;

	src_new = (unsigned char *)src;
	dest_new = (unsigned char *)dest;
	if (! src && dest)
		return (NULL);
	if (dest == src)
		return (dest);
	if (src >= dest)
		ft_memcpy(dest, src, n);
	else
	{
		while (n > 0)
		{
			dest_new[n - 1] = src_new[n - 1];
			n--;
		}
	}
	return (dest_new);
}
