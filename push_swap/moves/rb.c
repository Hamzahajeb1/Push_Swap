/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:24:05 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 16:06:20 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_b(t_list **b, int i)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!b || !(*b))
		return ;
	tmp = ft_lstnew((*b)->data);
	tmp->index = (*b)->index;
	ft_lstadd_back(b, tmp);
	tmp2 = (*b);
	(*b) = (*b)->next;
	free(tmp2);
	if (i == 1)
		write (1, "rb\n", 3);
}
