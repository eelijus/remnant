/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NEWquicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 14:24:48 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/27 16:30:00 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/NEWquicksort.h"

DoublyList* createDoublyList()
{
    DoublyList *headPointer;
	//메모리 할당
    headPointer = (DoublyList *)malloc(sizeof(DoublyList));
	// headP
    //초기화 작업
    headPointer->currentElementCount = 0;
    headPointer->headerNode.data = 0;
    headPointer->headerNode.pLLink = &headPointer->headerNode;
    headPointer->headerNode.pRLink = &headPointer->headerNode;
    
    return (headPointer);
}


int addDLElement(DoublyList* pList, int position, int element)
{
  DoublyListNode *new_node;
  DoublyListNode *next;
  DoublyListNode *prev;

  //???????
  if (position < 0 ||
      position > pList->currentElementCount)
      return (FALSE);
  
  //??? ???? ???
  new_node = (DoublyListNode *)malloc(sizeof(DoublyListNode));
  new_node->data = element;
  new_node->pLLink = 0;
  new_node->pRLink = 0;

  //??????? ??????????,
  if  (pList->currentElementCount == 0)
  {
    new_node->pRLink = pList->headerNode.pRLink;
    new_node->pLLink = pList->headerNode.pLLink;
    pList->headerNode.pRLink = new_node;
    pList->headerNode.pLLink = new_node;
  }
  else
  {
    //??????? ??????? ???????, position?? 0??? getDLElemet?? ?? left?? ???? ?????? ????.
    prev = getDLElement(pList, position - 1);
    next = prev->pRLink;
    new_node->pLLink = prev;
    new_node->pRLink = next;
    prev->pRLink = new_node;
    next->pLLink = new_node;
  }
  pList->currentElementCount++;

  return (TRUE);
}


DoublyListNode* getDLElement(DoublyList* pList, int position)
{
  DoublyListNode *move;
  int cnt = 0;

  //position 예외처리
  if (position < 0 ||
      position >= pList->currentElementCount)
      return (FALSE);
  //순회할 노드
  move = pList->headerNode.pRLink;

  while (cnt < position)
  {
    move = move->pRLink;
    cnt++;
  }

  return (move);
}

void displayDoublyList(DoublyList* pList)
{
  DoublyListNode *move;
  int cnt = 0;
  move = pList->headerNode.pRLink;
  while (cnt < pList->currentElementCount)
  {
    printf("%d ", move->data);
    cnt++;
    move = move->pRLink;
  }
  printf("\n");
}

void	nodeSwitch(DoublyListNode *right, DoublyListNode *left)
{
	int temp = 0;
	
	if (!right || !left)
		return ;
	temp = right->data;
	right->data = left->data;
	left->data = temp;
}

int		isSorted(DoublyListNode *left, DoublyListNode *right)
{
	DoublyListNode *curr;
	
	curr = left;
	while (left == right)
	{ 
		if (curr->data > curr->pRLink->data)
			return FALSE;
		else if (curr->data < curr->pRLink->data)
      left = left->pRLink;
	}
	return TRUE;
}

void	quickSort(DoublyListNode *left, DoublyListNode *right)
{
	DoublyListNode *pivot;
	DoublyListNode *leftNode;
	DoublyListNode *rightNode;
	int start = 1;
	int total = 8;
	int end = total - 1;

	//들어온 노드 수가 1개일 경우 종료
	if (end <= 0)
		return ;
	pivot = right;
	leftNode = left;
	rightNode = pivot->pLLink;
  printf("quick sort func in\n");
  
  if (isSorted(left, right))
   {
     printf("is Sorted\n");
     printf("start: %d, end: %d\n", left->data, right->data);
     return ; 
   }
	while (1)
	{
    printf("while in\n");
		while (leftNode->data < pivot->data)
		{
			leftNode = leftNode->pRLink;
			start++;
		}
		while (rightNode->data < pivot->data)
		{
			rightNode = rightNode->pLLink;
			end--;
		}
		if (start >= end)
			break;
		
		nodeSwitch(leftNode, rightNode);

		leftNode = leftNode->pRLink;
		start++;
		rightNode = rightNode->pLLink;
		end--;
	}
	
	//pivot switch
	nodeSwitch(pivot, leftNode);
	
  printf("before rec\n");
	//sort left side of pivot
	if (leftNode->pRLink && start - 1 > 0)
		if (left->pRLink != left && left->pLLink != leftNode)
			quickSort(left, leftNode->pLLink);
	//sort right side of pivot
	if (leftNode->pRLink && start < total)
		if (leftNode->pLLink != right && right->pRLink != leftNode)
			quickSort(leftNode->pRLink, right);
}