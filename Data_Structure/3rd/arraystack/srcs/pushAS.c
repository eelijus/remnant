/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushAS.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:57:25 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 14:59:29 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

int pushAS(ArrayStack* pStack, ArrayStackNode element)
{
    //���� ó��
    if (!pStack)
        return (FALSE);
    //�����÷ο� ����
    //���ÿ� ���� ������ ���� ��
    if (!isArrayStackFull(pStack))
    {
        //�� �ڿ� �Ű����� element�� ���� ��� ���ڸ� �߰�����
        pStack->pElement[pStack->currentElementCount] = element;
        pStack->currentElementCount++;
        return (TRUE);
    }
    return (FALSE);

}