/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:23:35 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 16:22:46 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(t_list **a, t_list **b)
{
	t_list	*new_node;
	t_list	*tmp_node;

	if (!b || !(*b))
		return ;
	new_node = ft_lstnew((*b)->data);
	ft_lstadd_front(a, new_node);
	tmp_node = (*b);
	if (!((*b)->next))
		(*b) = NULL;
	else
		(*b) = (*b)->next;
	free(tmp_node);
	write (1, "pa\n", 3);
}