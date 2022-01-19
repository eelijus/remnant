/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   popAS.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:04:24 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 11:49:45 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

ArrayStackNode* popAS(ArrayStack* pStack)
{
	// ArrayStackNode* top = NULL;
	
	// if (!pStack)
	// 	return (FALSE);
	// //���� ����÷ο� ����
	// //������ ������� ���� ���
	// if (!isArrayStackEmpty(pStack))
	// {
	// 	//������ ���� �迭 �� ĭ�� ��Ī�ϴϱ� *temp�� ����(string �����غ���)
	// 	*top = pStack->pElement[pStack->currentElementCount - 1];
	// 	pStack->pElement[pStack->currentElementCount - 1].data = 0;
	// 	pStack->currentElementCount--;
	// 	return (top);
	// }	
	// return (FALSE);

	ArrayStackNode *topNode;

    if (!pStack)
        return (NULL);
    if (isArrayStackEmpty(pStack) == 0)
    {
        topNode = (ArrayStackNode *)malloc(sizeof(ArrayStackNode));
        if (!topNode)
            return (NULL);
        *topNode = pStack->pElement[pStack->currentElementCount - 1];
        pStack->currentElementCount--;
        return (topNode);
    }
    return (NULL);
}