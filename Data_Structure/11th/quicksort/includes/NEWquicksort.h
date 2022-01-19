/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NEWquicksort.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:36:38 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/27 16:28:27 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _QUICK_SORT_
#define _QUICK_SORT_
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct DoublyListNodeType
{
	int data;
	struct DoublyListNodeType* pLLink;
	struct DoublyListNodeType* pRLink;
} DoublyListNode;

typedef struct DoublyListType
{
	int	currentElementCount;		// ???? ????? ?????? ????
	DoublyListNode	headerNode;		// ??? ???(Header Node)
} DoublyList;

/*
==========================================================================================

                                    DoublyList Functions

==========================================================================================
*/

DoublyList* createDoublyList();
int addDLElement(DoublyList* pList, int position, int element);
DoublyListNode* getDLElement(DoublyList* pList, int position);
void displayDoublyList(DoublyList* pList);

/*
==========================================================================================

                                    Sorting Functions

==========================================================================================
*/

void quickSort(DoublyListNode *left, DoublyListNode *right);
void nodeSwitch(DoublyListNode *rigth, DoublyListNode *left);
int		isSorted(DoublyListNode *left, DoublyListNode *right);

#define TRUE	1
#define FALSE	0


#endif