/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:23:07 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 13:51:45 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sorting(char **arg, t_list **stack_a, t_list **stack_b)
{
	t_list	*node;
	int		i;

	node = (*stack_a);
	i = count(node);
	if (i == 2)
		sort_2(stack_a);
	else if (i == 3)
		sort_3(stack_a);
	else if (i == 4)
		sort_4(stack_a);
	else if (i == 5)
		sort_5(stack_a);
	else if (i > 5)
	{
		from_a_to_b(range(get_len(arg)), stack_a, stack_b);
		from_b_to_a((get_len(arg)), stack_a, stack_b);
	}
}
