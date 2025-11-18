/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:03:24 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/18 11:06:01 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compare two strings up to n characters.
 * @param s1 First string.
 * @param s2 Second string.
 * @param n Max characters.
 * @return Difference between first differing characters.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		diff = s1[i] - s2[i];
		if (diff != 0 || s1[i] == '\0' || s2[i] == '\0')
			return (diff);
		i++;
	}
	return (0);
}
