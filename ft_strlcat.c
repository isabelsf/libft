/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misabel- <misabel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 23:46:42 by misabel-          #+#    #+#             */
/*   Updated: 2022/05/06 01:41:28 by misabel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	j;

	i = 0;
	dst_len = ft_strlen(dst);
	j = dst_len;
	if (dst_len >= size)
		return (ft_strlen(src) + size);
	while (src[i] != '\0' && j < (size - 1))
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (ft_strlen(src) + (dst_len));
}
