/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misabel- <misabel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:04:33 by misabel-          #+#    #+#             */
/*   Updated: 2022/05/14 03:13:59 by misabel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		s1_len;

	if (! (s1 || set))
		return (NULL);
	i = 0;
	s1_len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1_len && ft_strchr(set, s1[s1_len]))
		s1_len--;
	return (ft_substr(s1, i, (s1_len - i + 1)));
}
