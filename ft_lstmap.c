/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:32:57 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/25 11:37:36 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
  * @brief Creates a new list by applying 'f' to each node.
  * @param lst First node of original list.
  * @param f Function to transform content.
  * @param del Cleanup function on failure.
  * @return New transformed list, or NULL. 
  */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));