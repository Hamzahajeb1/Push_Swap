/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:23:48 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 16:22:31 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_b(t_list **a, t_list **b)
{
	t_list	*new_node;
	t_list	*tmp_node;

	if (!a || !(*a))
		return ;
	new_node = ft_lstnew((*a)->data);
	new_node->index = (*a)->index;
	ft_lstadd_front(b, new_node);
	tmp_node = (*a);
	if (!((*a)->next))
		(*a) = NULL;
	else
		(*a) = (*a)->next;
	free(tmp_node);
	write (1, "pb\n", 3);
}
