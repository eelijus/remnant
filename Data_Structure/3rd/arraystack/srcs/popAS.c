/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   popAS.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:04:24 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 15:17:12 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

ArrayStackNode* popAS(ArrayStack* pStack)
{   
    //pop 호출 시 반환용 탑노드의 그릇 생성 -> 반환할 노드의 주소 복사할 것
    ArrayStackNode *topNode;

    if (!pStack)
        return (FALSE);
    //스택 언더플로우 예외 처리
    if (pStack->currentElementCount == 0)
        return (FALSE);
    if (isArrayStackEmpty(pStack) == 0)
    {
        //그릇에 반환할 탑노드의 주소 할당
        topNode = &pStack->pElement[pStack->currentElementCount - 1];
        pStack->currentElementCount--;
        return (topNode);
    }
    return (FALSE);
}