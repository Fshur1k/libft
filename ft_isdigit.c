/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 07:15:08 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/10 07:21:06 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int n);

int	ft_isdigit(int n)
{
	return (n >= '0' && n <= '9');
}

int main(void)
{
	int n = '4';
	printf("%d", ft_isdigit(n));
}