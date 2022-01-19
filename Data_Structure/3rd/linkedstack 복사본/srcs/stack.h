/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 02:55:43 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/29 19:44:21 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _STACK_
#define _STACK_

typedef struct StackNode
{
	int data;
	struct StackNode* pLink;
} StackNode;

typedef struct LinkedStack
{
	int currentSize;		// ���� ������ ������
	StackNode* pTop;		// ž(Top) ��带 ����Ű�� ������
} LinkedStack;


LinkedStack*	createLinkedStack();
int				pushLinkedStack(LinkedStack* pStack, StackNode element);
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
