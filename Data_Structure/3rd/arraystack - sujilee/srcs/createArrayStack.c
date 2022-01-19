/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createArrayStack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:36:31 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 12:07:19 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

ArrayStack* createArrayStack(int maxElementCount)
{
	//배열 스택 그릇 생성
	ArrayStack *stack;

	//예외 처리
	if (maxElementCount <= 0)
		return (FALSE);
		
	//메모리 할당
	stack = (ArrayStack *)malloc(sizeof(ArrayStack));
	//할당 실패시 프로그램 종료
	if (!stack)
		return (FALSE);
	
	stack->maxElementCount = maxElementCount;
	stack->currentElementCount = 0;

	//생성한 배열의 칸 max만큼 메모리 할당
    stack->pElement = (ArrayStackNode *)malloc(sizeof(ArrayStackNode) * maxElementCount);
	//할당 실패시 프로그램 종료 & stack 메모리 해제
	 if (!(stack->pElement))
    {
        free(stack);
        return (FALSE);
    }
	return (stack);
}