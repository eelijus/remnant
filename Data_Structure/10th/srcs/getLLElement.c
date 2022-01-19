/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getLLElement.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semin <semin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:25:10 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/20 23:16:52 by semin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedgraph.h"

LinkedNode* getLLElement(LinkedList* pList, int position)
{
	LinkedNode *curr;
	int		index = 0;
	
	//�Ű����� position�� ��� �������� ū ���� ���ڷ� ������ �� ����
	// if (position >= pList->currentElementCount)
	// 	return (FALSE);
	//curr�� ���� position 0�� ����� �ּҰ��� ����
	curr = pList->headNode->pLink;
	
	//��� ��ȸ
	while (index < position)
	{
		curr = curr->pLink;
		index++;
	}
	return (curr);
}