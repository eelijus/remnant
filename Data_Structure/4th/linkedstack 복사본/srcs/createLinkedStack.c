/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createLinkedStack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:50:24 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/29 17:30:26 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include <stdlib.h>

LinkedStack* createLinkedStack()
{
	//��ũ�彺���� �Ӹ� ���� 
	LinkedStack *headPointer;

	//�޸� �Ҵ�
	headPointer = (LinkedStack*)malloc(sizeof(LinkedStack));
	//���� ���� �� ����
	if (!headPointer)
		return(FALSE);
	//�ʱ�ȭ �۾�
	headPointer->currentSize = 0;
	headPointer->pTop = 0;
	
	return (headPointer);
}