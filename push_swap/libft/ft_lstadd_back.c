/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:26:14 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 15:55:00 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	t_list	*last;

	if (!(*lst))
	{
		*lst = new_node;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new_node;
}
