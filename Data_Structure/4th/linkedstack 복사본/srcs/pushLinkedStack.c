/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushLinkedStack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:59:25 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/02 16:52:32 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

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