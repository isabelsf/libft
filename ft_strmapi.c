/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misabel- <misabel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 03:01:52 by misabel-          #+#    #+#             */
/*   Updated: 2022/05/09 21:44:31 by misabel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;	
	int		i;
	char	*s_new;

	len = ft_strlen(s);
	i = 0;
	s_new = ((char *) malloc(len * sizeof(char) + 1));
	if (! s_new)
		return (NULL);
	while (s[i] != '\0')
	{
		s_new[i] = f(i, s[i]);
		i++;
	}
	s_new[i] = '\0';
	return (s_new);
}
