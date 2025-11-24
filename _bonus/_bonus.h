/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _bonus.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 22:02:20 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/21 22:06:39 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BONUS_H

# define _BONUS_H

# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
t_list *ft_lstnew(void *content);

#endif