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
	int x; // user's x 좌표
	int y; // user's y 좌표
	int direction; // DIRECTIONS 배열의 인덱스
	struct StackNode* pLink;
} StackNode;

typedef struct LinkedStack
{
	int currentSize;		// 현재 스택의 사이즈
	StackNode* pTop;		// 탑(Top) 노드를 가리키는 포인터
} LinkedStack;

static int DIRECTIONS[4][2] =
{
	{0, -1}, //상
	{0, 1}, //하
	{-1, 0}, //좌
	{1, 0} //우
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
