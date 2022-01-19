/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayArrayQueue.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:04:31 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/07 12:04:40 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrayqueue.h"

void displayArrayQueue(ArrayQueue* pQueue)
{
	int idx = pQueue->front;
    if (!pQueue)
        return;
        
    printf("The max size of stack : %d\n", pQueue->maxElementCount);
    printf("The current size of stack : %d\n", pQueue->currentElementCount);
    for (int i = 0; i < pQueue->currentElementCount; i++)
    {
        printf("{index: %d, data: %c}\n", idx, pQueue->pElement[idx].data);
		idx = (idx + 1) % pQueue->maxElementCount;
	}
}