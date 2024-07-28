NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): main.c libft/atoi_custm.c libft/ft_atoi.c libft/ft_lstadd_back.c libft/ft_lstadd_front.c libft/ft_lstlast.c libft/ft_strdup.c libft/ft_lstnew.c libft/ft_split.c libft/ft_strjoin.c  \
			moves/pa.c moves/pb.c moves/ra.c moves/rb.c moves/rr.c moves/rra.c moves/rrb.c moves/rrr.c moves/sa.c moves/sb.c moves/ss.c sort/from_a_to_b.c sort/from_b_to_a.c \
			sort/sort_2.c sort/sort_3.c sort/sort_4.c sort/sort_5.c sort/sorting.c utils/add_index.c utils/add_num.c utils/arr_sort.c utils/check_digit.c utils/check_duplicated.c \
			utils/count.c utils/ft_strlen.c utils/find_max.c utils/find_min.c utils/free_arg.c utils/free_stack.c utils/get_len.c utils/if_sorted.c utils/on_top_b.c utils/on_top_a.c utils/range.c utils/split_args.c
	@$(CC) $(CFLAGS)  -g3 $^ -o $@

clean:
	@rm -f  $(NAME)

fclean: clean

re: fclean all
