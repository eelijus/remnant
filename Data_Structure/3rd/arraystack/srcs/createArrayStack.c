/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createArrayStack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:36:31 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 14:48:16 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

ArrayStack* createArrayStack(int maxElementCount)
{
    //���� ó��
	if (maxElementCount <= 0)
        return (FALSE);
    //�迭 ������ ���� �׸� ����
    ArrayStack *stack;
    //�޸� �Ҵ�
    stack = (ArrayStack *)malloc(sizeof(ArrayStack));
    //���� �� ����ó�� 
    if (stack == FALSE)
        return (FALSE);
        
    stack->maxElementCount = maxElementCount;
    stack->currentElementCount = 0;
    //�迭 ĭ��ŭ(maxElementCount) �޸� �Ҵ�
    stack->pElement = (ArrayStackNode *)malloc(sizeof(ArrayStackNode) * maxElementCount);
    //���� �� ����ó��
    if (!(stack->pElement))
    {
        free(stack);
        return (FALSE);
    }
    return (stack);
}