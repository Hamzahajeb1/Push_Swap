/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:26:35 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 17:25:47 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct variables
{
	int	len;
	int	*str;
	int	i;
	int	j;
}		t_var;

typedef struct s_list
{
	int				index;
	int				data;
	struct s_list	*next;
}		t_list;

/*   linked Lists Utils   */

t_list	*ft_lstnew(int i);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new_node);
void	ft_lstadd_back(t_list **lst, t_list *new_node);

/*      Moves      */

void	push_a(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);
void	swap_a(t_list **a, int i);
void	swap_b(t_list **b, int i);
void	rotate_a(t_list **a, int i);
void	rotate_b(t_list **b, int i);
void	rev_rotate_a(t_list **a, int i);
void	rev_rotate_b(t_list **b, int i);
void	ss(t_list **a, t_list **b);
void	rr(t_list **a, t_list **b);
void	rrr(t_list **a, t_list **b);

/*     Sorting    */

void	sort_2(t_list **lst);
void	sort_3(t_list **lst);
void	sort_4(t_list **lst);
void	sort_5(t_list **lst);
void	sorting(char **arg, t_list **stack_a, t_list **stack_b);
void	from_a_to_b(int r, t_list **stack_a, t_list **stack_b);
void	from_b_to_a(int len, t_list **stack_a, t_list **stack_b);

/*     Utils     */

char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
char	**split_args(char **argv);
int		find_min(t_list *lst, int i);
int		*check_digit(char **arg);
long	atoi_custm(char *str);
int		ft_atoi(const char *str);
int		*check_duplicated(char **arg);
int		if_sorted(int *str, int len);
int		get_len(char **arg);
int		find_max(int len, t_list *stack_b);
int		count(t_list *lst);
int		range(int n);
void	on_top_a(t_list **lst, int i, int j);
void	on_top_b(t_list **lst, int i, int j);
void	free_arg(char **arg);
void	free_stack(t_list **stack);
void	arr_sort(int **str, int len);
void	add_num(char **arg, t_list **node);
void	add_index(int *str, int len, t_list **stack_a);

#endif
