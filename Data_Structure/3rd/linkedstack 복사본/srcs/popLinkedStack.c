/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   popLinkedStack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:07:51 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 15:35:43 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include <stdlib.h>

StackNode*		popLinkedStack(LinkedStack* pStack)
{

    //���� ó��
	if (!pStack)
        return (FALSE);
   if (!isLinkedStackEmpty(pStack))
    {
        //��ȯ�� pop ����� �ּҸ� ���� �׸� ����
        StackNode *pop_Node;
    
        //pop_Node�� ���� top����� �ּ� �Ҵ�
        pop_Node = pStack->pTop;

        //pStack->pTop = NULL;
        //���� �ι�° ���� ��� ���� -> top ��ü
        
        pStack->pTop = pop_Node->pLink;
        pStack->currentSize--;

        return (pop_Node);
    }
    else
        return(NULL);
}