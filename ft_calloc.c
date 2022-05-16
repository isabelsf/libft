/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misabel- <misabel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 22:05:33 by misabel-          #+#    #+#             */
/*   Updated: 2022/05/15 23:55:08 by misabel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;
	size_t	prdt;

	prdt = nelem * elsize;
	if (nelem != 0 && (prdt / nelem != elsize))
		return (NULL);
	ptr = malloc(prdt);
	if (! ptr)
		return (NULL);
	ft_bzero(ptr, prdt);
	return (ptr);
}
