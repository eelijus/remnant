/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:52:25 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/29 19:23:44 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	LinkedStack *pStack = NULL;

	StackNode *temp = NULL;
	StackNode *ppopp = NULL;
	
	pStack = createLinkedStack();
	if (pStack != 0)
	{
		StackNode node1 = {2, 0};
		StackNode node2 = {4, 0};
		StackNode node3 = {7, 0};
	
		pushLinkedStack(pStack, node1);
		pushLinkedStack(pStack, node2);
		pushLinkedStack(pStack, node3);
		
		printf("currentsize : %d", pStack->currentSize);
		
		ppopp = popLinkedStack(pStack);
		temp = peekLinkedStack(pStack);
		
		displayLinkedStack(pStack);
		
		printf("returned peek data : %d\n", temp->data);
		printf("returned pop data : %d\n", ppopp->data);

		deleteLinkedStack(pStack);
		printf("%d\n", isLinkedStackEmpty(pStack));
		
		printf("after deleteLSfunc");	
		displayLinkedStack(pStack);
		
		system("leaks stack");
		return (0);
		
	}
}