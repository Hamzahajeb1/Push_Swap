/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:24:49 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 16:10:39 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_rotate_b(t_list **b, int i)
{
	t_list	*tmp;
	t_list	*tmp2;
	t_list	*tmp3;

	if (!b || !(*b) || !(*b)->next)
		return ;
	tmp = ft_lstnew(ft_lstlast((*b))->data);
	tmp->index = (ft_lstlast((*b)))->index;
	tmp2 = (*b);
	while (tmp2->next)
	{
		if (!(tmp2->next->next))
			tmp3 = tmp2;
		tmp2 = tmp2->next;
	}
	ft_lstadd_front(b, tmp);
	free (tmp2);
	tmp3->next = NULL;
	if (i)
		write (1, "rrb\n", 4);
}
