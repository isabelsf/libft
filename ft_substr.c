/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misabel- <misabel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:10:47 by misabel-          #+#    #+#             */
/*   Updated: 2022/05/11 19:41:29 by misabel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	substr_len;

	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	substr_len = ft_strlen(&s[start]);
	if (len > substr_len)
		len = substr_len;
	substr = (char *) malloc(len * sizeof(char) + 1);
	if (! substr)
		return (NULL);
	ft_strlcpy(substr, (s + start), len + 1);
	substr[len] = '\0';
	return (substr);
}
