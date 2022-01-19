/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maze_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:16:13 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/02 17:21:00 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maze.h"

LinkedStack* createLinkedStack()
{
	//링크드스택의 머리 생성 
	LinkedStack *headPointer;

	//메모리 할당
	headPointer = (LinkedStack*)malloc(sizeof(LinkedStack));
	//말록 실패 시 종료
	if (!headPointer)
		return(NULL);
	//초기화 작업
	headPointer->currentSize = 0;
	headPointer->pTop = 0;
	
	return (headPointer);
}

int		pushLinkedStack(LinkedStack* pStack, StackNode element)
{
	//링크드스택에 push해 줄 노드 생성
	StackNode *new_top;
	
	//예외 처리
	if (!pStack)
		return (FALSE);
	//메모리 할당
	new_top = (StackNode*)malloc(sizeof(StackNode));
	//매개변수 element로 들어온 노드의 data값을 new_node에 복사
	new_top =  &element;
	//new_node(새 top)와 기존 top 링크 연결
	new_top->pLink = pStack->pTop;
	//헤드 노드와 링크 연결
	pStack->pTop = new_top;
	pStack->currentSize++;

	return (TRUE);
}

StackNode*		popLinkedStack(LinkedStack* pStack)
{

    //예외 처리
	if (!pStack)
        return (FALSE);
   if (!isLinkedStackEmpty(pStack))
    {
        //반환할 pop 노드의 주소를 담을 그릇 생성
        StackNode *pop_Node;
    
        //pop_Node에 현재 top노드의 주소 할당
        pop_Node = pStack->pTop;

        //pStack->pTop = NULL;
        //기존 두번째 노드와 헤드 연결 -> top 교체
        
        pStack->pTop = pop_Node->pLink;
        pStack->currentSize--;

        return (pop_Node);
    }
    else
        return(NULL);
}

int			isLinkedStackEmpty(LinkedStack* pStack)
{
	if (pStack->currentSize == 0)
		return (TRUE);
	else
		return (FALSE);
}