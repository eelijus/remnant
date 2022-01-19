/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:54:06 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/14 14:51:18 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct		s_stack
{
	int 			data;
	struct s_stack	*next;
	struct s_stack	*prev;
} 					t_stack;

typedef struct s_carrier
{
	int		ac_cnt;
	int 	min;
	int		max;
	int		pivot;
	int		a_cnt;
	int		b_cnt;
	int		error;
	int		arem_cnt; //������ ����
	int		brem_cnt;
	struct t_stack *a_remnant;  // ���� b�� �Ѿ�� ���� a�� ¥����
	struct t_stack *b_remnant;	// ���� a�� �Ѿ�� ���� b�� ¥����
}			t_carrier;




/*****************************************************/
/**                     libft.c                     **/
/*****************************************************/

int				ft_atoi(char *str, t_carrier *carrier);
char			**ft_split(char const *s, char c);



/*****************************************************/
/**                   push_swap.c                   **/
/*****************************************************/


void		fill_stack(t_carrier *carrier, t_stack **a, int size, char **argv);
void    	init_carrier(t_carrier *carrier);
void    	push_swap(t_carrier *carrier, t_stack *a, t_stack *b);


/*****************************************************/
/**                   command.c                   **/
/*****************************************************/


void		pa(t_carrier *carrier, t_stack **a, t_stack **b);
void		pb(t_carrier *carrier, t_stack **a, t_stack **b);
void		ra(t_stack **a);
void		rb(t_stack **b);
void		rra(t_stack **a);
void		rrb(t_stack **b);
void		sa(t_stack **a);
void		sb(t_stack **b);


/*****************************************************/
/**                   utils.c                   **/
/*****************************************************/


void        error(t_carrier *carrier);
void        is_overlapped(t_carrier *carrier, t_stack **a);
void        init_pushed_stack(t_carrier *carrier, t_stack **stack, int data);
int   		pop(t_stack **stack);
void 		push(t_stack **stack, int data);
int    		find_max(t_carrier *carrier, t_stack **stack);
int    		find_min(t_carrier *carrier, t_stack **stack);
int    		find_pivot(t_carrier *carrier, t_stack **stack);


/*****************************************************/
/**                   sort.c                   **/
/*****************************************************/

int			is_sorted(t_stack *a);
void		sort_three(t_carrier *carrier, t_stack **a);
void		sort_five(t_carrier *carrier, t_stack **a, t_stack **b);


/*****************************************************/
/**                   free.c                   **/
/*****************************************************/

void		free_stack(t_stack **stack);
void		free_arr(char **arr);


/*****************************************************/
/**                   debug.c                   **/
/*****************************************************/
void		print_stack(t_carrier *carrier, t_stack *stack);
#endif