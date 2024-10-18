/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenc <agenc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 13:10:31 by agenc             #+#    #+#             */
/*   Updated: 2023/04/10 13:10:33 by agenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;

void	check_args(int argc, char **argv);
void	fill_stack_value(t_list **stack, int argc, char **argv);
void	indexing(t_list *stack);

int		swap(t_list **stack, char c);
int		rotate(t_list **stack, char c);
int		reverse_rotate(t_list **stack, char c);
int		push(t_list **stack, t_list **push, char c);
int		min_order(t_list **stack_a);

void	radix_sort(t_list **stack_a, t_list **stack_b);
int		get_max_bits(t_list **stack);

void	sort_2(t_list **stack_a);
void	sort_3(t_list **stack_a);
void	sort_4(t_list **stack_a, t_list **stack_b, int min);
void	sort_5(t_list **stack_a, t_list **stack_b);
void	simple_sort(t_list **stack_a, t_list **stack_b);

t_list	*ft_lstnew(int value);
void	ft_lstadd_front(t_list **stack, t_list *new);
t_list	*ft_lstlast(t_list *head);
void	ft_lstadd_back(t_list **stack, t_list *new);
int		ft_lstsize(t_list *head);

void	error(void);
int		is_sorted(t_list **stack);
void	free_stack(t_list **a_stack, t_list **b_stack);
int		is_duplicate(int nb, char **argv, int i);
int		is_num(char *num);

#endif
