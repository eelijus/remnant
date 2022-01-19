/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findNodes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:53:48 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/24 13:02:15 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedgraph.h"
#include "linkedqueue.h"
#include "primMST.h"

LinkedQueue* findBFSNodes(LinkedGraph* pGraph, int start)
{
	int *visited = (int *)calloc(pGraph->maxVertexCount, sizeof(int));
	
	return (findNodes(pGraph, start, visited));
}

LinkedQueue* findNodes(LinkedGraph* pGraph, int startVertexID, int *visited)
{
	LinkedQueue *myQueue; //BFS�� Ž�� �� ��带 �̸� ��Ƴ��� ����
	LinkedQueue *displayQueue; //myQueue���� pop�Ǿ� ���� Ž���� �� ���
	
	LinkedNode *curr; //��ȸ�� �׸�
	int	data;

	myQueue = createLinkedQueue();
	displayQueue = createLinkedQueue();
	
	visited[startVertexID] = TRUE;
	//Ž���� ������ vertexID�� ť�� ��ť
	insertRearLD(myQueue, startVertexID);

	//��� ��尡 pop �ɶ����� -> �����ϴ� ��� vertex�� Ž���Ҷ�����
	while (!isLinkedQueueEmpty(myQueue))
	{


		//data : Ž���� �Ϸ�� vertex�� ID, �ش� vertex�� pop
		data = deleteFrontLD(myQueue)->data;
		//������ pop�� vertexID�� �Ϸ�� ť�� Ǫ��
		insertRearLD(displayQueue, data);
		
		//curr : �ش� vertaxID�� ������� 
		curr = pGraph->ppAdjEdge[data]->headNode->pLink;
	
		//�ش� vertexID�� ��� ������带 ��������
		while (curr)
		{
			//�湮���� ���� ����̸� �湮 ǥ�ø� �ϰ� Ž�����忡 Ǫ�� 
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
	return (displayQueue);
}