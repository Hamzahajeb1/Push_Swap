/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:25:16 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 16:21:19 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_b(t_list **b, int i)
{
	int	tmp;
	int	tmp2;

	if (!b || !(*b) || !(*b)->next)
		return ;
	tmp = (*b)->next->data;
	tmp2 = (*b)->next->index;
	(*b)->next->data = (*b)->data;
	(*b)->next->index = (*b)->index;
	(*b)->data = tmp;
	(*b)->index = tmp2;
	if (i)
		write (1, "sb\n", 3);
}
