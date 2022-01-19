/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteRearLD.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:19:39 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/07 14:29:35 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

DequeNode *deleteRearLD(LinkedDeque *pDeque)
{
	DequeNode *ret_node;

	if (!pDeque)
		return (NULL);
	if (isLinkedDequeEmpty(pDeque))
		return (NULL);
	ret_node = pDeque->pRearNode;

	if (pDeque->currentElementCount == 1)
	{
		pDeque->pFrontNode = 0;
		pDeque->pRearNode = 0;
	}
	else
	{
		pDeque->pRearNode = pDeque->pRearNode->pLLink;
		pDeque->pRearNode->pRLink = NULL;
		ret_node->pLLink = NULL;
	}
	pDeque->currentElementCount--;
	return (ret_node);
}