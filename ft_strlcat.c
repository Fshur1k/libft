/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:58:21 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/15 10:52:45 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	while (src[i] && size > 0)
	{
		i++;
	}
	len_src = i;
	i = 0;
	while (i < len_src && dst[len_src + i - 1])
	{
		dst[len_src + i] = src[i];
		i++;
	}
	dst[len_src + i] = '\0';
	return (len_src + i);
}

int main(void)
{
	char str[] = "String";
	char str2[] = "NewString";
	int length = strlcat(str2, str, 4);
	printf("%s, %d",str2, length);
}