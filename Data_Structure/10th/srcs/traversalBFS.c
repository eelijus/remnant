/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   traversalBFS.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:53:48 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/23 21:38:59 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedgraph.h"

int checkBFSVisited(LinkedGraph* pGraph, int start)
{
	int *visited = (int *)calloc(pGraph->maxVertexCount, sizeof(int));

	// for(int i = 0; i < pGraph->maxVertexCount; i++)
	// {
	// 	if (!visited[i])
	// 		treversalDFS(pGraph, i);
	// }
	return (traversalBFS(pGraph, start, visited));
}	

//???? ??
int traversalBFS(LinkedGraph* pGraph, int startVertexID, int *visited)
{
	LinkedQueue *myQueue;

	
	LinkedNode *curr;
	int	data;

	myQueue = createLinkedQueue();

	
	printf("BFS : %d\n", startVertexID);
	
	visited[startVertexID] = FALSE;
	//?? ?? ??
	insertRearLD(myQueue, startVertexID);

	//?? ?? ????
	while (!isLinkedQueueEmpty(myQueue))
	{
		//?? ?? -> ?? ?? ?? ??
		//?? ?? & ?? -> ???? ?? ???? ?? ??
		//???? ?? & ?? ->  "
		//visited == TRUE ? ?? ?? 

		//data? ??? ??? vertaxID? ???
		data = deleteFrontLD(myQueue)->data;
		if (data == pGraph->pVertex[startVertexID])
		{
			free(visited);
			return (TRUE);
		}
		// insertRearLD(displayQueue, data);
		//curr? ??? ?? ?? ??
		curr = pGraph->ppAdjEdge[data]->headNode->pLink;
		// printf("curr data: %d\n", curr->vertaxID);
		//??? ??? ??? ?? ??? ?? ?? visited ??
		while (curr)
		{
			if (visited[curr->vertaxID] == FALSE)
			{
				visited[curr->vertaxID] = TRUE;
				insertRearLD(myQueue, curr->vertaxID);
			}
			curr = curr->pLink;
		}
	}
	deleteLinkedQueue(myQueue);

	free(visited);
	return (FALSE);
}