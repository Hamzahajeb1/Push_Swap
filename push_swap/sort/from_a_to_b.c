/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:20:37 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 13:38:13 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	from_a_to_b(int r, t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = 0;
	while ((*stack_a))
	{
		if ((*stack_a)->index < i)
		{
			push_b (stack_a, stack_b);
			rotate_b (stack_b, 1);
			r++;
			i++;
		}
		else if ( i <= (*stack_a)->index && r >= (*stack_a)->index)
		{
			push_b (stack_a, stack_b);
			r++;
			i++;
		}
		else
			rotate_a (stack_a, 1);
	}
	return ;
}
