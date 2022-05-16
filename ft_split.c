/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misabel- <misabel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 21:24:51 by misabel-          #+#    #+#             */
/*   Updated: 2022/05/14 19:22:00 by misabel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_trim(char const *s, char c, char **ptr_start, char **ptr_end)
{
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] != '\0' && s[start] == c)
		start += 1;
	while (end >= 0 && s[end] == c)
		end -= 1;
	*ptr_end = (char *)s + end;
	*ptr_start = (char *)s + start;
}

static int	ft_count_words(char *start, char *end, char c)
{
	int	j;

	j = 1;
	if (*start == '\0')
		return (0);
	while (start <= end)
	{
		if (*start == c)
		{
			while (*start != '\0' && *start == c)
				start++;
			j++;
			start--;
		}
		start++;
	}
	return (j);
}

static void	ft_copy_str(char **array, char *ptr_start, int i, int *j)
{
	array[*j] = malloc(sizeof(char) * (i + 2));
	ft_strlcpy(array[(*j)++], ptr_start, i + 2);
}

static void	ft_set_new_start(char **ptr_start, char *ptr_end, int *i, char c)
{
	while ((*ptr_start + (++*i)) <= ptr_end && (*ptr_start)[*i] == c)
		;
	*ptr_start += *i;
	*i = -1;
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	char	*ptr_end;
	char	*ptr_start;

	i = 0;
	j = 0;
	ft_trim(s, c, &ptr_start, &ptr_end);
	array = ft_calloc(ft_count_words(ptr_start, ptr_end, c) + 1,
			sizeof(char *));
	if (! array)
		return (NULL);
	while ((ptr_start + i) <= ptr_end && ptr_start[i] != '\0')
	{
		if ((ptr_start + i) == ptr_end || ptr_start[i + 1] == c)
		{
			ft_copy_str(array, ptr_start, i, &j);
			ft_set_new_start(&ptr_start, ptr_end, &i, c);
		}
		i++;
	}
	return (array);
}
