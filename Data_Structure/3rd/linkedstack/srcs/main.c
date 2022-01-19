/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:32:02 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 15:37:50 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	LinkedStack *myStack;
	
	StackNode *temp;
	StackNode node0 = {0};
	
	int number;
	myStack = createLinkedStack();
	while(1)
	{
		printf("1 : Push\n2 : Pop\n3 : Peek\n4 : Display\n5 : Delete\n");
		scanf(" %d", &number);
		switch (number)
		{
		case 1:
			printf("data : ");
			scanf("%d", &(node0.data));
			pushLinkedStack(myStack, node0);
			displayLinkedStack(myStack);

			break;
		case 2:
			temp = popLinkedStack(myStack);
			printf("%d has popped out!\n",  temp->data);
			free(temp);
			displayLinkedStack(myStack);
			break;
		case 3:
			temp = peekLinkedStack(myStack);
			printf("tada %d!\n", temp->data);
			break;
		case 4:
			displayLinkedStack(myStack);
			break;
		case 5:
			deleteLinkedStack(myStack);
			if (isLinkedStackEmpty(myStack) == 1)
			{
				printf("successfuly deleted\n");
				printf("====================\n");
			}
			else
				printf("fail");
			break;
		default:
			break;
		}
	}
	system("leaks stack");
	return (0);
}