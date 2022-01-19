/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   popAS.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:04:24 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 11:49:45 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

ArrayStackNode* popAS(ArrayStack* pStack)
{
	// ArrayStackNode* top = NULL;
	
	// if (!pStack)
	// 	return (FALSE);
	// //스택 언더플로우 방지
	// //스택이 비어있지 않을 경우
	// if (!isArrayStackEmpty(pStack))
	// {
	// 	//우항은 지금 배열 한 칸을 지칭하니까 *temp가 맞음(string 생각해보셈)
	// 	*top = pStack->pElement[pStack->currentElementCount - 1];
	// 	pStack->pElement[pStack->currentElementCount - 1].data = 0;
	// 	pStack->currentElementCount--;
	// 	return (top);
	// }	
	// return (FALSE);

	ArrayStackNode *topNode;

    if (!pStack)
        return (NULL);
    if (isArrayStackEmpty(pStack) == 0)
    {
        topNode = (ArrayStackNode *)malloc(sizeof(ArrayStackNode));
        if (!topNode)
            return (NULL);
        *topNode = pStack->pElement[pStack->currentElementCount - 1];
        pStack->currentElementCount--;
        return (topNode);
    }
    return (NULL);
}