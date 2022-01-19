/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayLinkedGraph.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:41:03 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/20 16:57:03 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedgraph.h"

void displayLinkedGraph(LinkedGraph* pGraph)
{
	int idx = 0;
	LinkedNode *curr;

	
	if (!pGraph)
		return FALSE;
	printf("MVC : %d\n", pGraph->maxVertexCount);
	printf("CVC : %d\n", pGraph->currentVertexCount);
	printf("CEC : %d\n", pGraph->currentEdgeCount);
	printf("G T : %d\n", pGraph->graphType == 1 ? "GRAPH_UNDIRECTED" : "GRAPH_DIRECTED");
	while (idx < pGraph->maxVertexCount)
	{
		printf("%d : ", idx);
		curr = pGraph->ppAdjEdge[idx]->headNode->pLink;
		while (curr)
		{
			printf("--%d--> %d", curr->weight, curr->vertaxID);
			curr = curr->pLink;
		}	
		print("\n");
		idx++;
	}
}