/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misabel- <misabel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:11:44 by misabel-          #+#    #+#             */
/*   Updated: 2022/05/14 03:18:17 by misabel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s_new;
	size_t	i;

	s_new = (char *)s;
	if (s == NULL)
		return (0);
	i = 0;
	while (s_new[i] != '\0')
	{
		if (s_new[i] == (char)c)
			return (&s_new[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&s_new[i]);
	return (0);
}
