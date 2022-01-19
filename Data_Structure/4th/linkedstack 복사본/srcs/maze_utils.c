/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maze_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:16:13 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/02 17:21:00 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maze.h"

LinkedStack* createLinkedStack()
{
	//��ũ�彺���� �Ӹ� ���� 
	LinkedStack *headPointer;

	//�޸� �Ҵ�
	headPointer = (LinkedStack*)malloc(sizeof(LinkedStack));
	//���� ���� �� ����
	if (!headPointer)
		return(NULL);
	//�ʱ�ȭ �۾�
	headPointer->currentSize = 0;
	headPointer->pTop = 0;
	
	return (headPointer);
}

int		pushLinkedStack(LinkedStack* pStack, StackNode element)
{
	//��ũ�彺�ÿ� push�� �� ��� ����
	StackNode *new_top;
	
	//���� ó��
	if (!pStack)
		return (FALSE);
	//�޸� �Ҵ�
	new_top = (StackNode*)malloc(sizeof(StackNode));
	//�Ű����� element�� ���� ����� data���� new_node�� ����
	new_top =  &element;
	//new_node(�� top)�� ���� top ��ũ ����
	new_top->pLink = pStack->pTop;
	//��� ���� ��ũ ����
	pStack->pTop = new_top;
	pStack->currentSize++;

	return (TRUE);
}

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

int			isLinkedStackEmpty(LinkedStack* pStack)
{
	if (pStack->currentSize == 0)
		return (TRUE);
	else
		return (FALSE);
}