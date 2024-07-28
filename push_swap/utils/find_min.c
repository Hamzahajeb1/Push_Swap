/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:17:06 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 17:15:15 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int find_min(t_list *lst, int i)
{
	t_list *min;
	int j;

	j = 0;
	min = lst;
	while (min)
	{
		if (min->index == i)
			return (j);
		min = min->next;
		j++;
	}
	return (0);
}
