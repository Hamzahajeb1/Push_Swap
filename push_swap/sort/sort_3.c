/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:21:41 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 13:44:22 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(t_list **lst)
{
	int	eins;
	int	zwei;
	int	drei;

	if (!(*lst) || !(*lst)->next || !(*lst)->next->next)
		return ;
	eins = (*lst)->data;
	zwei = (*lst)->next->data;
	drei = (*lst)->next->next->data;
	if ((eins > zwei) && (zwei < drei) && (eins < drei))
		swap_a(lst, 1);
	else if ((eins > zwei) && (zwei > drei))
	{
		rotate_a(lst, 1);
		swap_a(lst, 1);
	}
	else if ((eins < zwei) && (zwei > drei) && (eins < drei))
	{
		swap_a(lst, 1);
		rotate_a(lst, 1);
	}
	else if ((eins > zwei) && (zwei < drei) && (eins > drei))
		rotate_a(lst, 1);
	else if ((eins < zwei) && (zwei > drei) && (eins > drei))
		rev_rotate_a(lst, 1);
}
