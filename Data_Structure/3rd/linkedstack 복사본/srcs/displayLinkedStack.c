/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayLinkedStack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:14:33 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/29 19:29:13 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include <stdio.h>

void			displayLinkedStack(LinkedStack* pStack)
{
	//���� ������� �ε����� ���� �����Ͱ� ����ϴ� �Լ�
	
		//���� ó��
		if (!pStack)
			return ;
		StackNode *curr;	//��ȸ�� ������ ����
		int	idx = pStack->currentSize - 1;
		
		curr = pStack->pTop;
		printf("stack size : %d\n", pStack->currentSize);
		while (curr)
		{
			printf("{index: %d, data: %d}\n", idx, curr->data);
			curr = curr->pLink;
			idx--;
		}
	
}