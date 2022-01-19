/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   popAS.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:04:24 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 15:17:12 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

ArrayStackNode* popAS(ArrayStack* pStack)
{   
    //pop ȣ�� �� ��ȯ�� ž����� �׸� ���� -> ��ȯ�� ����� �ּ� ������ ��
    ArrayStackNode *topNode;

    if (!pStack)
        return (FALSE);
    //���� ����÷ο� ���� ó��
    if (pStack->currentElementCount == 0)
        return (FALSE);
    if (isArrayStackEmpty(pStack) == 0)
    {
        //�׸��� ��ȯ�� ž����� �ּ� �Ҵ�
        topNode = &pStack->pElement[pStack->currentElementCount - 1];
        pStack->currentElementCount--;
        return (topNode);
    }
    return (FALSE);
}