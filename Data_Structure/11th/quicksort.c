/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:38:06 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/27 14:24:46 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "quicksort.h"

int		isSorted(DoublyList *pList, int position)
{
	DoublyListNode *curr;
	int i = 0;
	
	if (!pList)
		return FALSE;
	curr = pList->headerNode.pRLink;
	while (i < position)
	{
		if (curr->data > curr->pRLink->data)
			return FALSE;
		else if (curr->data < curr->pRLink->data)
			i++;
	}
	return TRUE;
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

DoublyListNode *findLeft(DoublyList *pList, int position)
{
	DoublyListNode *left;
	
	int idx = 0;

	if (!pList)
		return NULL;
	if (position >= pList->currentElementCount)
		return NULL;
	left = pList->pivot->pLLink;
	while (idx++ < position)
	{
		if (left->data < pList->pivot->data)
			return left;
		else
			left = left->pLLink;
	}
}

DoublyListNode *findRight(DoublyList *pList, int position)
{
	DoublyListNode *right;
	
	int idx = 0;

	if (!pList)
		return NULL;
	if (position >= pList->currentElementCount)
		return NULL;
	right = pList->headerNode.pRLink;
	while (idx++ < position)
	{
		if (right->data > pList->pivot->data)
			return right;
		else
			right = right->pRLink;
	}
}

DoublyList *quickSort(DoublyList *pList)
{
	DoublyList *leftList;
	DoublyList *rightList;
	
	DoublyListNode *pivot;
	DoublyListNode *left;
	DoublyListNode *right;
	int position = 0;
	int start = 0;
	int end = pList->currentElementCount - 1;

	if (!pList)
		return NULL;
	
	DoublyList *mySort;
	mySort = (DoublyList *)calloc(1, sizeof(DoublyList));
	if (!mySort)
		return NULL;
	
	mySort = pList;
	position = pList->currentElementCount - 1;
	pList->pivot = getDLElement(pList, position);
	pivot->position = position;
	
	
	left = findLeft(pList, position);
	right = findRight(pList, position);
	
	
	
	start = pivot->position + 1;
	
	
	
	
	while (!isSorted(pList, position))
	{
		if (left == right)
			break;
		nodeSwitch(right, left);
		left = left->pRLink;
		right = right->pLLink;
	}
	pivot = right;
	position = pivot->position;
	
	

}



int		main(void)
{
	
}