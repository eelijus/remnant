/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peekAS.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:22:13 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 14:57:20 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

ArrayStackNode* peekAS(ArrayStack* pStack)
{
    //peek ȣ�� �� ��ȯ�� ž����� �׸� ����
    ArrayStackNode *top_node;

    if (!pStack)
        return (NULL);
    if (!isArrayStackEmpty(pStack))
    {
        //�׸��� ��ȯ�� ž����� �ּ� �Ҵ�
        top_node = &(pStack->pElement[pStack->currentElementCount - 1]);
        return (top_node);
    }
    return (NULL);
}