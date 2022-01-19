/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createArrayStack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:36:31 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 14:48:16 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

ArrayStack* createArrayStack(int maxElementCount)
{
    //예외 처리
	if (maxElementCount <= 0)
        return (FALSE);
    //배열 스택을 위한 그릇 생성
    ArrayStack *stack;
    //메모리 할당
    stack = (ArrayStack *)malloc(sizeof(ArrayStack));
    //실패 시 예외처리 
    if (stack == FALSE)
        return (FALSE);
        
    stack->maxElementCount = maxElementCount;
    stack->currentElementCount = 0;
    //배열 칸만큼(maxElementCount) 메모리 할당
    stack->pElement = (ArrayStackNode *)malloc(sizeof(ArrayStackNode) * maxElementCount);
    //실패 시 예외처리
    if (!(stack->pElement))
    {
        free(stack);
        return (FALSE);
    }
    return (stack);
}