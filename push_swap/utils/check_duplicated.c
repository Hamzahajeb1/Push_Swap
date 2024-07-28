/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicated.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:17:54 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 16:44:40 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int *to_ints(char **arg, int len) 
{
	int i;
    int *str; 
	
	str = malloc(len * sizeof(int));
    if (!str) 
        return NULL;
    i = 0;
    while (i < len) 
	{
        str[i] = ft_atoi(arg[i]);
        i++;
    }
    return (str);
}

void check_for_duplicates(int *str, int len)
{
    int i;
	int	j; 
	
	j = 0;
    while (j < len) 
	{
        i = j + 1;
        while (i < len) 
		{
            if (str[j] == str[i]) 
			{
                write(1, "Error\n", 6);
                free(str);
                exit(1);
            }
            i++;
        }
        j++;
    }
}

int *check_duplicated(char **arg) 
{
    int len;
    int *str;
	
	len = get_len(arg);
	str = to_ints(arg, len);
    if (str == NULL)
        return NULL;
    check_for_duplicates(str, len);
    return str;
}




