/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peekAS.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:22:13 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 14:57:20 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

ArrayStackNode* peekAS(ArrayStack* pStack)
{
    //peek 호출 시 반환용 탑노드의 그릇 생성
    ArrayStackNode *top_node;

    if (!pStack)
        return (NULL);
    if (!isArrayStackEmpty(pStack))
    {
        //그릇에 반환할 탑노드의 주소 할당
        top_node = &(pStack->pElement[pStack->currentElementCount - 1]);
        return (top_node);
    }
    return (NULL);
}