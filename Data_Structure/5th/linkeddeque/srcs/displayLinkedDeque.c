/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayLinkedDeque.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:27:20 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/07 13:32:57 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

void displayLinkedDeque(LinkedDeque *pDeque)
{
	if (!pDeque)
		return;
	DequeNode *curr; //순회용 포인터 생성
	int idx = 0;

	curr = pDeque->pFrontNode;
	printf("Deque size : %d\n", pDeque->currentElementCount);
	while (idx < pDeque->currentElementCount)
	{
		printf("{index: %d, data: %d}\n", idx, curr->data);
		curr = curr->pRLink;
		idx++;
	}
}