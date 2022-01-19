/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteLinkedStack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:20:06 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/02 16:55:11 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include <stdlib.h>

void		deleteLinkedStack(LinkedStack* pStack)
{
	StackNode *temp; //free�� �� ��� �׸�
	
	if (!pStack)
		return ;
	//��� ��带 ��ȸ�ϸ鼭 pop ����
	while (pStack->currentSize)
	{
		temp = popLinkedStack(pStack);
		free(temp);
	}
	free(pStack);
}