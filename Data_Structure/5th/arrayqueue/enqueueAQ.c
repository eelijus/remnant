/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enqueueAQ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:02:42 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/07 12:02:56 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrayqueue.h"

int enqueueAQ(ArrayQueue* pQueue, ArrayQueueNode element)
{
	if (!pQueue)
		return (FALSE);
	if (isArrayQueueFull(pQueue))
		return (FALSE);
	pQueue->rear = (pQueue->rear + 1) % pQueue->maxElementCount;
    pQueue->pElement[pQueue->rear] = element;
    pQueue->currentElementCount++;
    return (TRUE);
}