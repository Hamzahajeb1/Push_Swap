/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:21:01 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 13:53:35 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	from_b_to_a(int len, t_list **stack_a, t_list **stack_b)
{
	int	i;

	while (0 <= len)
	{
		i = find_max(len, *stack_b);
		if (-1 != i)
		{
			on_top_b(stack_b, len, i);
			push_a(stack_a, stack_b);
		}
		len--;
	}
}
