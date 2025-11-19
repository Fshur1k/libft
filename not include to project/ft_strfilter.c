/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 17:36:25 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/19 20:20:49 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_char(const char *s, int n)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == n)
			return (1);
		i++;
	}
	return (0);
}

/**
 * @brief Filter characters by string set.
 * @param s String to filter.
 * @param set Filter.
 * @return Newly allocated filtered string.
 */
char	*ft_strfilter(char const *s, char const *set)
{
	char	*ft_strfilter;
	size_t	l_str;
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	if (!s || !set)
		return (NULL);
	ft_strfilter = ft_strdup(s);
	if (ft_strfilter == NULL)
		return (NULL);
	l_str = ft_strlen(s);
	while (ft_strfilter[i])
	{
		if (!find_char((const char *)set, ft_strfilter[i]))
		{
			ft_strfilter[l] = ft_strfilter[i];
			l++;
		}
		i++;
	}
	ft_strfilter[l] = '\0';
	return (ft_strfilter);
}
