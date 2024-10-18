/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenc <agenc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 13:11:13 by agenc             #+#    #+#             */
/*   Updated: 2023/04/10 13:11:18 by agenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_duplicate(int nb, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == nb)
			return (1);
		i++;
	}
	return (0);
}

int	is_num(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-' || num[0] == '+')
		i++;
	while (num[i])
	{
		if (num[i] == ' ')
			i++;
		else if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	if (i == 1 && (num[0] == '-' || num[0] == '+'))
		error();
	if (i == 2 && num[0] == '-' && !ft_isdigit (num[1]))
		error();
	return (1);
}

void	error(void)
{
	write(1, "Error\n", 7);
	exit(0);
}

int	is_sorted(t_list **stack)
{
	t_list	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

void	free_stack(t_list **a_stack, t_list **b_stack)
{
	t_list	*head;
	t_list	*tmp;
	t_list	*head2;
	t_list	*tmp2;

	head = *a_stack;
	head2 = *b_stack;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(a_stack);
	while (head2)
	{
		tmp2 = head2;
		head2 = head2->next;
		free(tmp2);
	}
	free(b_stack);
}
