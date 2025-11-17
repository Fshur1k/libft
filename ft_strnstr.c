/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:22:36 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/17 19:50:08 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;
	
	i = 0;
	if (maxlen == 0)
		return (0);
	while (i < maxlen && s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	size_t	little_len;
	const char *p_big = NULL;
	
	little_len = ft_strnlen(little, len);
	p_big = (const char *)big;
	i = 0;
	if (little_len == '\0')
		return ((char *)big);
	while(i < (int)(len - little_len))
	{
		if ((ft_strncmp(p_big+i,little,len) == 0))
			return ((char *)(big + i));
		i++;
	}
	return NULL;
}

int main(void)
{
	const char *big = "London is the capital of Great Britain";
	const char *little = "cap";
	printf("%s", ft_strnstr(big, little, 38));
	return 0;
}
