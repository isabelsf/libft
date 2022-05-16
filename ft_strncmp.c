/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:26:58 by misabel-          #+#    #+#             */
/*   Updated: 2022/05/10 02:25:18 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_new;
	unsigned char	*s2_new;

	i = 0;
	s1_new = (unsigned char *)s1;
	s2_new = (unsigned char *)s2;
	while ((s1_new[i] || s2_new[i]) && i < n)
	{
		if ((s1_new[i] != s2_new[i]))
			return (s1_new[i] - s2_new[i]);
		i++;
	}
	return (0);
}
