/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:15:07 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/28 11:59:05 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		*str;
	char	**arg;

	stack_a = NULL;
	stack_b = NULL;
	if (!argv || !(*argv) || argc < 2)
		return (1);
	if (argc > 1)
	{
		arg = split_args(argv);
		str = check_digit(arg);
		if (str && if_sorted(str, get_len(arg)) != 0)
		{
			arr_sort(&str, get_len(arg));
			add_num(arg, &stack_a);
			add_index(str, get_len(arg), &stack_a);
			sorting(arg, &stack_a, &stack_b);
		}
		free_arg(arg);
		free(str);
		free_stack(&stack_a);
	}
	return (0);
}