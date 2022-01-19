/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isArrayQueueEmpty.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:04:49 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/07 12:04:54 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrayqueue.h"

int isArrayQueueEmpty(ArrayQueue* pQueue)
{
	return (pQueue->currentElementCount == 0 ? TRUE : FALSE);
}