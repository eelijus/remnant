#ifndef _PRIM_MST_
#define _PRIM_MST_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"
#include "linkedqueue.h"
#include "linkedgraph.h"
#include "stack.h"




typedef struct GraphEdgeType {
	int	fromVertexID; 	//���۳��
	int toVertexID;		//������
	int weight;			//����ġ
} GraphEdge;


//��ȯ �˻�
int checkCycle(LinkedGraph* pGraph, int fromVertexID, int toVertexID);

//�������� ���� �˰���
LinkedGraph* primMST(LinkedGraph* pGraph, int vertexID);

//�μӵ� ���� �� ����ġ�� ���� ���� ���� ����(��ȯ �߻� x)
void getMinWeightEdge(LinkedGraph *pGraph, int vertexID, LinkedNode *nextnode);

void checkEdge(LinkedGraph *pGraph, LinkedGraph *myMst, int vertexID);
LinkedQueue* findBFSNodes(LinkedGraph* pGraph, int start);
LinkedQueue* findNodes(LinkedGraph* pGraph, int startVertexID, int *visited);
int InitAndPushStack(LinkedStack *pStack, int nodeID);


#endif