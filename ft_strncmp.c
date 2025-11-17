/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:03:24 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/17 15:00:03 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;
	const unsigned char *str1;
	const unsigned char *str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;

	i = 0;
	if (n == 0)
		return (0);
    while (i < n)
	{
		diff = str1[i] - str2[i];
		if ( diff != 0 || str1[i] == '\0' || str2[i] == '\0')
			return (diff);
		i++;
	}
	return (0);
}

int main(void)
{
	const char s1[] = "Sasha";
	const char s2[] = "Saha";
	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, 4));
	printf("strncmp: %d\n", strncmp(s1, s2, 4));
	return 0;
}
