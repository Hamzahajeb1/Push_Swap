/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:21:56 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 13:46:02 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_4(t_list **lst)
{
	t_list	*lst_b;

	lst_b = NULL;
	on_top_a(lst, 4, find_min((*lst), 0));
	push_b(lst, &lst_b);
	sort_3(lst);
	push_a(lst, &lst_b);
	return ;
}
