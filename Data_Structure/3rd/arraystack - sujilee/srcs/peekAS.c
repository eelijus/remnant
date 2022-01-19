/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peekAS.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:22:13 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 12:53:15 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

ArrayStackNode* peekAS(ArrayStack* pStack)
{
	// if (!pStack)
	// 	return (FALSE);
	// //현재 배열에 노드가 존재할 경우
	// if (!pStack->currentElementCount)
	// {
	// 	return (&pStack->pElement[pStack->currentElementCount - 1]);
	// }
	// else
	// 	return (NULL);
	ArrayStackNode *topNode;

    if (!pStack)
        return (NULL);
    if (!isArrayStackEmpty(pStack))
    {
        topNode = &(pStack->pElement[pStack->currentElementCount - 1]);
        return (topNode);
    }
    return (NULL);
}