/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:25:09 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 16:19:09 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_list **a, int i)
{
	int	tmp;
	int	tmp2;

	if (!a || !(*a) || !(*a)->next)
		return ;
	tmp = (*a)->next->data;
	tmp2 = (*a)->next->index;
	(*a)->next->data = (*a)->data;
	(*a)->next->index = (*a)->index;
	(*a)->data = tmp;
	(*a)->index = tmp2;
	if (i)
		write (1, "sa\n", 3);
}
