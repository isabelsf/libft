/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misabel- <misabel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:19:06 by misabel-          #+#    #+#             */
/*   Updated: 2022/05/14 17:54:42 by misabel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_digits(int n)
{
	size_t	c;

	c = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

static int	ft_is_negative(int n)
{
	if (n >= 0)
		return (0);
	return (1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_negative;
	int		str_len;

	is_negative = ft_is_negative(n);
	str_len = ft_count_digits(n) + is_negative;
	str = (char *) ft_calloc(str_len + 1, sizeof(char));
	if (! str)
		return (NULL);
	if (is_negative)
		str[0] = '-';
	else
		n *= -1;
	while (str_len - is_negative > 0)
	{
		str[str_len - 1] = -1 * (n % 10) + '0';
		str_len--;
		n /= 10;
	}
	return (str);
}
