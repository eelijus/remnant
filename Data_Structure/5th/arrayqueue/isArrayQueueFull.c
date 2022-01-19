/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isArrayQueueFull.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:05:01 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/07 12:05:05 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrayqueue.h"

int isArrayQueueFull(ArrayQueue* pQueue)
{
	return (pQueue->maxElementCount == pQueue->currentElementCount ? TRUE : FALSE);
}