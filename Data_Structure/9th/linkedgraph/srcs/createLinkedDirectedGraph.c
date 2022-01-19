/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createLinkedDirectedGraph.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:26:30 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/20 14:27:36 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedgraph.h"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createLinkedGraph.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:10:48 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/20 14:27:12 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedgraph.h"

LinkedGraph* createLinkedDirectedGraph(int maxVertexCount)
{
	LinkedGraph* myGraph;

	// �׷��� ����
	myGraph = (LinkedGraph *)calloc(1, sizeof(LinkedGraph));
	if (!myGraph)
		return NULL;
	myGraph->maxVertexCount = maxVertexCount;
	myGraph->graphType = GRAPH_DIRECTED;

	// ������ ������ �迭 �޸� �Ҵ�
	myGraph->ppAdjEdge = (LinkedList **)calloc(maxVertexCount, sizeof(LinkedList));
	if (!myGraph->ppAdjEdge) 
	{
		free(myGraph);
		return NULL;
	}
	// ������ ������ �迭 �޸� �Ҵ�
	while (maxVertexCount-- >= 0)
	{
		myGraph->ppAdjEdge[maxVertexCount] = (LinkedList *)calloc(1, sizeof(LinkedList));
	}
	// ���� ������ �迭 �޸� �Ҵ�
	myGraph->pVertex = (int *)calloc(maxVertexCount, sizeof(int));
	if (!myGraph->ppAdjEdge)
	{
		free(myGraph);
		for(int i = 0; i < myGraph->maxVertexCount; i++)
		{
			free(myGraph->ppAdjEdge[i]);
		}
		free(myGraph->ppAdjEdge);
		return NULL;
	}
}