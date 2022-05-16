/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misabel- <misabel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:05:09 by misabel-          #+#    #+#             */
/*   Updated: 2022/05/12 03:19:55 by misabel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_new;
	int		i;

	s_new = (char *)s;
	i = (ft_strlen(s_new) + 1);
	while (i--)
	{
		if (s_new[i] == (unsigned char)c)
			return (&s_new[i]);
	}
	return (NULL);
}
