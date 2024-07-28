/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:24:30 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 16:17:24 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_rotate_a(t_list **a, int i)
{
	t_list	*tmp;
	t_list	*tmp2;
	t_list	*tmp3;

	if (!a || !(*a) || !(*a)->next)
		return ;
	tmp = ft_lstnew(ft_lstlast((*a))->data);
	tmp->index = (ft_lstlast((*a)))->index;
	tmp2 = (*a);
	while (tmp2->next)
	{
		if (!(tmp2->next->next))
			tmp3 = tmp2;
		tmp2 = tmp2->next;
	}
	ft_lstadd_front(a, tmp);
	free (tmp2);
	tmp3->next = NULL;
	if (i)
		write (1, "rra\n", 4);
}
