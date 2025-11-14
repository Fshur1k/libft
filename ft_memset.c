/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:45:04 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/14 15:17:08 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*p_str;

	p_str = (unsigned char *)s;
	while (len > 0)
	{
		*p_str = (unsigned char)c;
		p_str++;
		len--;
	}
	return (s);
}
