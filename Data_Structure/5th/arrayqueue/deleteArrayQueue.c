/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteArrayQueue.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:03:56 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/07 12:04:07 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrayqueue.h"

void deleteArrayQueue(ArrayQueue* pQueue)
{
	if (!pQueue)
		return ;
	while (!isArrayQueueEmpty(pQueue))
		free(dequeueAQ(pQueue));
	free(pQueue->pElement);
	free(pQueue);
}