/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:18:54 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/12 15:32:16 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    ft_bzero(void *s, size_t len);

void    ft_bzero(void *s, size_t len)
{
    unsigned char *p_str;

    p_str = (unsigned char *)s;
    while(len > 0)
    {
        *p_str = '\0';
        p_str++;
        len--;
    }
}
