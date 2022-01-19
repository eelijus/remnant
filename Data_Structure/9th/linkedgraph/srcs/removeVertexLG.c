/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   removeVertexLG.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:06:05 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/20 16:34:05 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedgraph.h"

int removeVertexLG(LinkedGraph* pGraph, int vertexID)
{
	LinkedNode *curr;
	
	int count = 0; 
	
	if (!pGraph)
		return FALSE;
	if (!checkVertexValid(pGraph, vertexID))
		return FAIL;

	curr = pGraph->ppAdjEdge[vertexID]->headNode->pLink;
	if (pGraph->graphType == GRAPH_UNDIRECTED)
	{
		while (curr)
		{	
			removeEdgeLG(pGraph, curr->vertaxID, vertexID);
			curr->pLink = curr;
			pGraph->currentEdgeCount--;
			count++;
		}
	}
	clearLinkedList(pGraph->pVertex[vertexID]);
	pGraph->currentEdgeCount -= count;
	pGraph->pVertex[vertexID] = NOT_USED;
	pGraph->currentVertexCount--;	
	return SUCCESS;
}