/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peekAQ.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:03:34 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/07 12:03:43 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrayqueue.h"

ArrayQueueNode *peekAQ(ArrayQueue* pQueue)
{
    ArrayQueueNode *ret_node;

	if (!pQueue)
		return (FALSE);
    if (isArrayQueueEmpty(pQueue))
        return (FALSE);
	ret_node = (ArrayQueueNode *)malloc(sizeof(ArrayQueueNode));
	if (!ret_node)
		return (FALSE);
    *ret_node = pQueue->pElement[pQueue->front];
    return (ret_node);
}