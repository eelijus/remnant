/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createArrayQueue.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:01:51 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/07 12:02:19 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrayqueue.h"

ArrayQueue* createArrayQueue(int maxElementCount)
{
	ArrayQueue *queue;
	
	if (!(queue = (ArrayQueue *)malloc(sizeof(ArrayQueue))))
		return (NULL);
	queue->maxElementCount = maxElementCount;
	queue->currentElementCount = 0;
	queue->front = 0;
	queue->rear = -1;
	queue->pElement = (ArrayQueueNode *)malloc(sizeof(ArrayQueueNode) * maxElementCount);
	if (!queue->pElement)
		return (NULL);
	return (queue);
}