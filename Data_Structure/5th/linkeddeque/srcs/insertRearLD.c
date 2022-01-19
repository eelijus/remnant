/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertRearLD.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:46:56 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/07 13:16:56 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

int insertRearLD(LinkedDeque* pDeque, DequeNode element)
{
	DequeNode *new_node;

	if (!pDeque)
		return (FALSE);
	new_node = (DequeNode *)malloc(sizeof(DequeNode));
	if (!new_node)
		return (FALSE);
	//매개변수 element의 인자로 들어온 node의 data값 복사
	new_node->data = element.data;
	if (pDeque->pRearNode)
	{
		pDeque->pRearNode->pRLink = new_node;
		new_node->pLLink = pDeque->pRearNode;
		pDeque->pRearNode = new_node;
		new_node->pRLink = NULL;
	}
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