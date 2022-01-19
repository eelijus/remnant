/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushAS.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:57:25 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 14:59:29 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

int pushAS(ArrayStack* pStack, ArrayStackNode element)
{
    //예외 처리
    if (!pStack)
        return (FALSE);
    //오버플로우 방지
    //스택에 여유 공간이 있을 때
    if (!isArrayStackFull(pStack))
    {
        //맨 뒤에 매개변수 element로 들어온 노드 인자를 추가해줌
        pStack->pElement[pStack->currentElementCount] = element;
        pStack->currentElementCount++;
        return (TRUE);
    }
    return (FALSE);

}