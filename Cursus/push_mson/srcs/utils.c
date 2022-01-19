/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 22:57:45 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/14 17:30:19 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

//���� ��� �Լ�. ���� �� carrier->error ��� �� == 1
void        error(t_carrier *carrier)
{
    if (!carrier)
        exit(1);
    if (!carrier->error)
    {
        printf("Error\n");
        carrier->error = 1;
    }
}

// A���� ���ο� �ߺ� ���� ���θ� Ȯ���ϴ� �Լ�
void        is_overlapped(t_carrier *carrier, t_stack **a)
{
    t_stack *temp;
    t_stack *comp;

    temp = *a;
    while (temp != 0)
    {
        comp = temp->next;
        while (comp != 0)
        {
            if (temp->data == comp->data)
            {
                error(carrier);
                printf("is overlapped!\n");
                return ;
            }
            comp = comp->next;
        }
        temp = temp->next;
    }
}

// ??? ���ÿ� Ǫ�������� ������ �ٲ��ִ� �Լ� ?
void        init_pushed_stack(t_carrier *carrier, t_stack **stack, int data)
{
    t_stack *temp;
    t_stack *tail;

    temp = (t_stack *)malloc(sizeof(t_stack));
    if (!temp)
    {
        printf("mallocation of temp failed\n");     
        error(carrier);
    }
    temp->data = data;
    //�ִ밪 �ּҰ� �ٽ� �Ҵ�
    if (data > carrier->max)
        carrier->max = data;
    if (data < carrier->min)
        carrier->min = data;
    // string���·� ���ö� ac_cnt == 1 �̱� ������ ac_cnt++;
    carrier->ac_cnt++;
    carrier->a_cnt++;
    //�� ������ ������ ���
   
    if (*stack == 0)
    {
        *stack = temp;
        (*stack)->prev = *stack;
        
        return ;
    }
    tail = (*stack)->prev;
    tail->next = 0;
    
    
    //���� ���� ��带 ���� ����� ���� ���� ����
    temp->next = 0;
    tail->next = temp;
    temp->prev = tail;
    
    (*stack)->prev = temp;
}


//���ÿ��� head��带 ������ ��ȯ�ϴ� �Լ�
int     pop(t_stack **stack)
{
    t_stack *pop;
    int     data;
    
    if (!stack)
        exit(1);
    pop = *stack;
    //headNext�� head�� �ٲ��ִ� ����
    if ((*stack)->next)
    {
        (*stack)->next->prev = (*stack)->prev;
        *stack = (*stack)->next;
    }
    data = pop->data;
    free(pop);
    return (data);
}

//�Ű����� node : ���ÿ� ���� ������� ���
void    push(t_stack **stack, int data)
{
    t_stack *newNode;
    
    newNode = (t_stack *)malloc(sizeof(t_stack));
    newNode->data = data;
    // ??? ������ ������� ���
    if (*stack == 0)
    {
        newNode->prev = newNode;
        *stack = newNode;
    }
    // ������ head�� ���ڷ� ���� node�� ��ü
    else
    {
        newNode->prev = (*stack)->prev;
        newNode->next = *stack;
        *stack = newNode;
    }
}

int    find_max(t_carrier *carrier, t_stack **stack)
{
    t_stack     *curr;
    int         max;
    
    if (!carrier || !stack)
        exit(1);
    curr = *stack;
    max = curr->data;
    //�� �κ�!!!
    while (curr)
    {
        if (max < curr->data)
            max = curr->data;
        curr = curr->next;
    }
    carrier->max = max;
    return (max); 
}

int    find_min(t_carrier *carrier, t_stack **stack)
{
    t_stack     *curr;
    int         min;
    
    if (!carrier || !stack)
        exit(1);
    curr = *stack;
    min = curr->data;
    // �� �κ�!!!!!!!!!!
    while (curr)
    {   
        printf("%d\n", curr->data);
        if (min > curr->data)
            min = curr->data;
        curr = curr->next;
    }
    carrier->min = min;
    return (min); 
}

int     find_pivot(t_carrier *carrier, t_stack **stack)
{
    int     pivot;
    int     max;
    int     min;

    if (!carrier || !stack)
        exit(1);
    max = find_max(carrier, stack);
    min = find_min(carrier, stack);
    pivot = (max + min) / 2;
    carrier->pivot = pivot;
    
    return (pivot);
}