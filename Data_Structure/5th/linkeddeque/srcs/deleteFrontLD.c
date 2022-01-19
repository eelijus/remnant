/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteFrontLD.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:09:04 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/07 14:20:22 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

DequeNode *deleteFrontLD(LinkedDeque *pDeque)
{
	DequeNode *ret_node;

	if (!pDeque)
		return (NULL);
	if (isLinkedDequeEmpty(pDeque))
		return (NULL);
	ret_node = pDeque->pFrontNode;

	if (pDeque->currentElementCount == 1)
	{
		pDeque->pFrontNode = 0;
		pDeque->pRearNode = 0;
	}
	else
	{
		pDeque->pFrontNode = pDeque->pFrontNode->pRLink;
		pDeque->pFrontNode->pLLink = NULL;
		ret_node->pRLink = NULL;
	}
	pDeque->currentElementCount--;
	return (ret_node);
}