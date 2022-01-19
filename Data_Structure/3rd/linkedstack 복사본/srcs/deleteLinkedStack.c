/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteLinkedStack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:20:06 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 15:36:37 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include <stdlib.h>

void		deleteLinkedStack(LinkedStack* pStack)
{
	StackNode *temp; //free용 빈 노드 그릇
	
	if (!pStack)
		return (FALSE);
	//모든 노드를 순회하면서 pop 실행
	while (pStack->currentSize)
	{
		temp = popLinkedStack(pStack);
		free(temp);
	}
	free(pStack);
}