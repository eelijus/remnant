/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertFrontLD.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:37:00 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/07 13:34:56 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

int insertFrontLD(LinkedDeque* pDeque, DequeNode element)
{
	DequeNode *new_node;

	if (!pDeque)
		return (FALSE);
	new_node = (DequeNode *)malloc(sizeof(DequeNode));
	if (!new_node)
		return (FALSE);
	//�Ű����� element�� ���ڷ� ���� node�� data�� ����
	new_node->data = element.data;
	if (pDeque->pFrontNode)
	{
		//���� ù ���� �� ��带 ��������� �۾�
		pDeque->pFrontNode->pLLink = new_node;
		new_node->pRLink = pDeque->pFrontNode;
		//����� ����Ʈ��带 �� ���� �Ӹ�
		pDeque->pFrontNode = new_node;
		new_node->pLLink = NULL;
	}
	//���� ����ִ� ��쿡 insert �Լ� ���
	else
	{
		pDeque->pFrontNode = new_node;
		pDeque->pRearNode = new_node;
		new_node->pLLink = NULL;
		new_node->pRLink = NULL;
	}

	pDeque->currentElementCount++;

	return (TRUE);
}