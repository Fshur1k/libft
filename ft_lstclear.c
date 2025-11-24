/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:37:01 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/24 20:13:46 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Delete entire list by entry point. And sen pointer NULL.
 * @param lst Pointer to a node.
 * @param del Function used to delete content.
 */
void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp_node;
	t_list	*cur_node;

	temp_node = NULL;
	cur_node = lst[0];
	if (!cur_node || !del)
		return ;
	while (cur_node != NULL)
	{
		temp_node = cur_node->next;
		del(cur_node->content);
		free(cur_node);
		cur_node = temp_node;
	}
	free(lst);
}