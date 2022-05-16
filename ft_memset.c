/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misabel- <misabel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 20:04:50 by misabel-          #+#    #+#             */
/*   Updated: 2022/05/11 02:46:24 by misabel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str_char;
	char	c_char;

	i = 0;
	str_char = (char *)s;
	c_char = (char)c;
	while (i < n)
	{
		str_char[i] = c_char;
		i++;
	}
	return (str_char);
}
