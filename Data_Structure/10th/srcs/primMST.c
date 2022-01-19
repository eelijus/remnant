#include "primMST.h"
#include "stack.h"



//prim �˰����� ����� �������� ����Ʈ�� ��ȯ �Լ�
LinkedGraph* primMST(LinkedGraph* pGraph, int vertexID)
{
	LinkedGraph *myMst; //���� ���� mst �׷���
	LinkedQueue *nodes;	//���� �׷����� �����ϴ� ��� vertex�� �׾Ƴ��� ť
	QueueNode *node;	//nodes���� pop�� ���� ���� vertex


	if (!pGraph)
		return FALSE;
	//�ּ� ���� Ʈ���� �� �׷��� �׸� ����
	myMst = createLinkedGraph(pGraph->currentVertexCount);
	//��ȿ�� �˻��ϸ� �� �׷����� vertex���� ä���
	for (int i = 0; i < pGraph->maxVertexCount; i++)
	{
		if (pGraph->pVertex[i] == USED)
			addVertexLG(myMst, i);
	}

	//findBFSNodes�Լ��� �����ϴ� ��� ��带 ã�� nodes ť�� ��ť
	nodes =	findBFSNodes(pGraph, vertexID);
	
	//nodes���� �۾��� vertex�� ��ť�� node�� �־���
	node = deleteFrontLD(nodes);
	while (node)
	{
		checkEdge(pGraph, myMst, node->data);
		free(node);
		node = deleteFrontLD(nodes);
			
	}
	deleteLinkedQueue(nodes);
	return (myMst);
}

//�μӵ� ���� �� ����ġ�� ���� ���� ���� ���� -> ���� ���� ����ġ�� ����� ��� ��ȯ
void getMinWeightEdge(LinkedGraph *pGraph, int vertexID, LinkedNode *nextNode)
{
	LinkedNode *curr;

	if (!pGraph)
		return ;
	//curr�� ���ڷ� ���� vertexID�� ������� �����
	curr = pGraph->ppAdjEdge[vertexID]->headNode->pLink;
	if (!curr)
	{
		nextNode->vertaxID = -1;
		return ;
	}

	nextNode->weight = curr->weight;
	nextNode->vertaxID = curr->vertaxID;
	
	//�ش� vertex�� ��� ������带 ���鼭 minWeightEdge�� ���� ��带 nextNode�� �Ҵ�
	while (curr)
	{	
		if (curr->weight < nextNode->weight)
		{
			nextNode->weight = curr->weight;
			nextNode->vertaxID = curr->vertaxID;
		}
		curr = curr->pLink;
	}
	return ;
}

void checkEdge(LinkedGraph *pGraph, LinkedGraph *myMst, int vertexID)
{
	int prevNodeID;
	LinkedNode nextNode;

	prevNodeID = vertexID;
	while (myMst->currentEdgeCount < myMst->currentVertexCount - 1)
	{
		getMinWeightEdge(pGraph, prevNodeID, &nextNode);
		//�� �̻� ���� ��尡 ������ break
		if (nextNode.vertaxID == -1)
			break ;
		//��ȯ�� ������ ���� �߰�
		if (!checkCycle(myMst, prevNodeID, nextNode.vertaxID))
		{
			addEdgewithWeightLG(myMst, prevNodeID, nextNode.vertaxID, nextNode.weight);
			break ;
		}
	}
}

int InitAndPushStack(LinkedStack *pStack, int nodeID)
{
	//node�� ��� ���� �ʱ�ȭ
	StackNode node = {0,};
	node.data = nodeID;
	return pushLinkedStack(pStack, node);
}

// 0 -> 1
int checkCycle(LinkedGraph* pGraph, int fromVertexID, int toVertexID)
{
	int isCycled = FALSE; //��ȯ�� ��� FALSE : ����Ŭ ����

	int idx = 0;
	int vertexID = 0;
	LinkedStack * stack = NULL;		//Ž���� ����
	StackNode *stackNode = NULL;	//pop�� ���
	LinkedNode *node = NULL;		

	int *visited = NULL;

	if (!pGraph)
		return FALSE;
	
	stack = createLinkedStack();
	if (!stack)
		return FALSE;
	
	visited = (int *)calloc(pGraph->maxVertexCount, sizeof(int));
	if (!visited)
	{
		deleteLinkedStack(stack);
		return FALSE;
	}

	visited[fromVertexID] = 1;
	
	//fromVertextID�� stack�� ����� �� 
	InitAndPushStack(stack, fromVertexID);
	//Ž���� ������ �����������
	while (!isLinkedStackEmpty(stack))
	{
		stackNode = popLinkedStack(stack);
		if (stackNode)
		{
			// 0 -> 2 -> 1 
			// 0���� ���� �߰��� 1������ ������ �̹� �ֳ� üũ (0, 1)
			vertexID = stackNode->data;
			if (vertexID == toVertexID)
			{
				printf(" graph overlapped %d, %d\n", fromVertexID, toVertexID);
				isCycled = TRUE;
				break;
			}
			free(stackNode);
			//node�� �ش� VertexID�� ������� �Ҵ�
			node = pGraph->ppAdjEdge[vertexID]->headNode->pLink;
			//�ش� VertexID�� ��� ������带 ���鼭
			while (node)
			{
				//�湮���� ���� ��尡 �ִٸ� ���ÿ� Ǫ�����ְ� �湮ǥ��
				idx = node->vertaxID;
				if (visited[idx] == FALSE)
				{
					visited[idx] = TRUE;
					InitAndPushStack(stack, idx);
				}
				node = node->pLink;
			}
		}
	}
	free(visited);
	deleteLinkedStack(stack);

	return isCycled;
}





//��ȯ���� Ȯ��
// int checkCycle(LinkedGraph* pGraph, int fromVertexID)
// {
// 	if (!pGraph)
// 		return FALSE;
// 	if (checkBFSVisited(pGraph, fromVertexID) == TRUE)
// 	{
// 		printf("graph overlapped\n");
// 		return (TRUE);
// 	}
// 	else
// 	{
// 		printf("no cycle\n");
// 		return (FALSE);3
// 	}
// }
