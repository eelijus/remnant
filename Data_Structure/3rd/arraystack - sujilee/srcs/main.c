/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:32:02 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 12:54:00 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

int main()
{
	ArrayStack *myStack;
	
	ArrayStackNode *temp;
	ArrayStackNode node0 = {'a'};
	
	int number;
	myStack = createArrayStack(10);
	while(1)
	{
		printf("1 : Push\n2 : Pop\n3 : Peek\n4 : Display\n5 : Delete\n6 : isEmpty\n");
		scanf(" %d", &number);
		switch (number)
		{
		case 1:
			printf("data : ");
			getchar();
			scanf("%c", &node0.data);
			pushAS(myStack, node0);
			displayArrayStack(myStack);

			break;
		case 2:
			temp = popAS(myStack);
			printf("%c popped out!\n",  temp->data);
			displayArrayStack(myStack);
			break;
		case 3:
			temp = peekAS(myStack);
			printf("tada %c!\n", temp->data);
			break;
		case 4:
			displayArrayStack(myStack);
			break;
		case 5:
			deleteArrayStack(myStack);
			break;
		case 6:
			if (isArrayStackEmpty(myStack) == 1)
			{
				printf("successfuly deleted\n");
				printf("====================\n");
			}
			else
				printf("fail\n");
			break;
		default:
			break;
		}
	}
	system ("leaks arraystack");
	return (0);
}