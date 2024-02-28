/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thguimar <thguimar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:31:53 by thguimar          #+#    #+#             */
/*   Updated: 2024/02/19 14:02:33 by thguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct s_stack_node
{
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
	bool				above_median;
	bool				cheapest;
	int					nbr;
	int					index;
	int					push_cost;	
}	t_stack;

//PUSH_SWAP
void	final_cleaner(char **argv);

//INIT_A_TO_B
void	current_index(t_stack *stack);
void	set_cheapest(t_stack *stack);
void	init_nodes_a(t_stack *a, t_stack *b);

//INITI_B_TO_A
void	init_nodes_b(t_stack *a, t_stack *b);

//PUSH
void	pa(t_stack **a, t_stack **b, bool print);
void	pb(t_stack **b, t_stack **a, bool print);

//REV_ROTATE
void	rra(t_stack **a, bool print);
void	rrb(t_stack **b, bool print);
void	rrr(t_stack **a, t_stack **b, bool print);

//ROTATE
void	ra(t_stack **a, bool print);
void	rb(t_stack **a, bool printf);
void	rr(t_stack **a, t_stack **b, bool print);

//SORT_STACKS
void	sort_stacks(t_stack **a, t_stack **b);

//SORT_THREE
void	sort_three(t_stack **a);

//SPLIT2
char	**split(char *s, char c);

//STACK_INIT
void	prep_for_push(t_stack **stack, t_stack *top_node, char stack_name);
void	init_stack_a(t_stack **a, char **argv);
t_stack	*get_cheapest(t_stack *stack);

//STACK_UTILS
int		stack_len(t_stack *stack);
t_stack	*find_last(t_stack *stack);
bool	stack_sorted(t_stack *stack);
t_stack	*find_min(t_stack *stack);
t_stack	*find_max(t_stack *stack);

//SWAP
void	sa(t_stack **a, bool print);
void	sb(t_stack **b, bool print);
void	ss(t_stack **a, t_stack **b, bool print);

//HANDLE_ERROS
int		error_syntax(char *str_n);
int		error_duplicate(t_stack *a, int n);
void	free_stack(t_stack **stack);
void	free_errors(t_stack **a);

//ROTATE_BOTH
void	rotate_both(t_stack **a, t_stack **b, t_stack *cheapest_node);
void	rev_rotate_both(t_stack **a, t_stack **b, t_stack *cheapest_node);

#endif
