/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   removeEdgeLG.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:13:48 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/20 16:01:23 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedgraph.h"

int removeEdgeLG(LinkedGraph* pGraph, int fromVertexID, int toVertexID)
{
	LinkedNode *headNode;
	LinkedNode *prevNode;
	LinkedNode *delNode;
	
	headNode = pGraph->ppAdjEdge[fromVertexID]->headNode;
	
	if (!pGraph)
		return FALSE;
	if (!checkVertexValid(pGraph, fromVertexID) || !checkVertexValid(pGraph, toVertexID))
	{
		printf("node do not exist");
		return FAIL;
	}
	delNode = headNode;
	prevNode = headNode;
	while (delNode)
	{
		if (delNode->vertaxID == toVertexID)
		{
			break;
		}
		prevNode = delNode;
		delNode = delNode->pLink;
	}
	if (!delNode)
		return FALSE;
	prevNode->pLink = delNode->pLink;
	free(delNode);
	if (pGraph->graphType == GRAPH_UNDIRECTED)
	{
		headNode = pGraph->ppAdjEdge[toVertexID]->headNode;
		delNode = headNode;
		prevNode = headNode;
		while (delNode)
		{
			if (delNode->vertaxID == fromVertexID)
			{
				break;
			}
			prevNode = delNode;
			delNode = delNode->pLink;
		}
		if (!delNode)
			return FALSE;
		prevNode->pLink = delNode->pLink;
		free(delNode);
	}
	pGraph->currentEdgeCount--;
	return SUCCESS;
}