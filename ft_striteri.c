/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 18:16:50 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/21 18:18:28 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Apply function to each char (in-place, iterate).
 * @param s Input string (modifiable).
 * @param f Function to apply.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
