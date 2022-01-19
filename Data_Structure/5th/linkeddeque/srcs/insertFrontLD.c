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
	//매개변수 element의 인자로 들어온 node의 data값 복사
	new_node->data = element.data;
	if (pDeque->pFrontNode)
	{
		//기존 첫 노드와 새 노드를 연결시켜준 작업
		pDeque->pFrontNode->pLLink = new_node;
		new_node->pRLink = pDeque->pFrontNode;
		//헤드의 프론트노드를 새 노드로 임명
		pDeque->pFrontNode = new_node;
		new_node->pLLink = NULL;
	}
	//덱이 비어있는 경우에 insert 함수 사용
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