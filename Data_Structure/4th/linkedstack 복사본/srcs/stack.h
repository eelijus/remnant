/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 02:55:43 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/02 16:58:23 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _STACK_
#define _STACK_
#include <stdio.h>
#include <stdlib.h>

typedef struct StackNode
{
	int data;
	int x; // user's x ��ǥ
	int y; // user's y ��ǥ
	int direction; // DIRECTIONS �迭�� �ε���
	struct StackNode* pLink;
} StackNode;

typedef struct LinkedStack
{
	int currentSize;		// ���� ������ ������
	StackNode* pTop;		// ž(Top) ��带 ����Ű�� ������
} LinkedStack;

static int DIRECTIONS[4][2] =
{
	{0, -1}, //��
	{0, 1}, //��
	{-1, 0}, //��
	{1, 0} //��
};

int HEIGHT;
int WIDTH;

void findPath(int **mazeArray,
	StackNode startPos,
	StackNode endPos,
	LinkedStack *pStack);
void printMap (int **mazeArray);
LinkedStack*	createLinkedStack();
int			pushLinkedStack(LinkedStack* pStack, StackNode element);
StackNode*		popLinkedStack(LinkedStack* pStack);
StackNode*		peekLinkedStack(LinkedStack* pStack);
int				isLinkedStackEmpty(LinkedStack* pStack);
void			deleteLinkedStack(LinkedStack* pStack);
void			displayLinkedStack(LinkedStack* pStack);
#endif

#ifndef _COMMON_LIST_DEF_
#define _COMMON_LIST_DEF_

#define TRUE		1
#define FALSE		0

#endif
