/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteArrayStack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:25:11 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 15:16:44 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

void deleteArrayStack(ArrayStack* pStack)
{   
    //예외 처리
	if (!pStack)
        return;
    //배열이 비워질때까지 pop으로 빼내준다
    while (!isArrayStackEmpty(pStack))
        popAS(pStack);
    //메모리 해제
    free(pStack->pElement);
    free(pStack);
    return;
}