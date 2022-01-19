/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createArrayStack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:36:31 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 12:07:19 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

ArrayStack* createArrayStack(int maxElementCount)
{
	//�迭 ���� �׸� ����
	ArrayStack *stack;

	//���� ó��
	if (maxElementCount <= 0)
		return (FALSE);
		
	//�޸� �Ҵ�
	stack = (ArrayStack *)malloc(sizeof(ArrayStack));
	//�Ҵ� ���н� ���α׷� ����
	if (!stack)
		return (FALSE);
	
	stack->maxElementCount = maxElementCount;
	stack->currentElementCount = 0;

	//������ �迭�� ĭ max��ŭ �޸� �Ҵ�
    stack->pElement = (ArrayStackNode *)malloc(sizeof(ArrayStackNode) * maxElementCount);
	//�Ҵ� ���н� ���α׷� ���� & stack �޸� ����
	 if (!(stack->pElement))
    {
        free(stack);
        return (FALSE);
    }
	return (stack);
}