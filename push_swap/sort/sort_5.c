/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:22:19 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 13:47:21 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_5(t_list **lst)
{
	t_list	*lst_b;

	lst_b = NULL;
	on_top_a(lst, 5, find_min((*lst), 0));
	push_b(lst, &lst_b);
	on_top_a(lst, 4, find_min((*lst), 1));
	push_b(lst, &lst_b);
	sort_3(lst);
	push_a(lst, &lst_b);
	push_a(lst, &lst_b);
	return ;
}
