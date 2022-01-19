/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteLinkedGraph.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:31:51 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/20 16:40:58 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedgraph.h"

void deleteLinkedGraph(LinkedGraph* pGraph)
{
	if (!pGraph)
		return FALSE;
	while (pGraph->currentVertexCount)
	{
		removeVertexLG(pGraph, pGraph->currentVertexCount - 1);
		free(pGraph->ppAdjEdge[pGraph->currentVertexCount - 1]);
	}
	
	if (pGraph->currentEdgeCount != 0 || pGraph->currentVertexCount != 0)
		printf("deleteLinkedGraph failed!\n");
	
	free(pGraph->ppAdjEdge);
	free(pGraph->pVertex);
	free(pGraph);
}