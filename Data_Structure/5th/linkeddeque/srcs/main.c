/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:32:02 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/07 14:14:13 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	LinkedDeque *myDeque;
	
	DequeNode *temp;
	DequeNode node0 = {0};
	
	int number;
	myDeque = createLinkedDeque();
	while(1)
	{
		printf("1 : Push front\n2 : Push rear\n3 : Peek front\n4 : Peek rear\n5 : Pop front\n6 : Pop rear\n7 : Display Deque\n8 : Delete Deque\n");
		scanf(" %d", &number);
		switch (number)
		{
		case 1:
			printf("insert front data : ");
			scanf("%d", &(node0.data));
			insertFrontLD(myDeque, node0);
			displayLinkedDeque(myDeque);
			break;
		case 2:
			printf("insert rear data : ");
			scanf("%d", &(node0.data));
			insertRearLD(myDeque, node0);
			displayLinkedDeque(myDeque);
			break;
		case 3:
			temp = peekFrontLD(myDeque);
			printf("<<front data is %d!>>\n", temp->data);
			break;
		case 4:
			temp = peekRearLD(myDeque);
			printf("<<rear data is %d!>>\n", temp->data);
			break;
		case 5:
			temp = deleteFrontLD(myDeque);
			printf("<<front data %d has popped out!>>\n", temp == 0 ? -1 : temp->data);
			free(temp);
			displayLinkedDeque(myDeque);
			break;
		case 6:
			temp = deleteRearLD(myDeque);
			printf("<<rear data %d has popped out!>>\n", temp == 0 ? -1 : temp->data);
			free(temp);
			displayLinkedDeque(myDeque);
			break;
		case 7:
			displayLinkedDeque(myDeque);
			break;
		case 8:
			deleteLinkedDeque(myDeque);
			printf("successfuly deleted\n");
			printf("====================\n");
			break;
		default:
			break;
		}
		if (number == 8)
			break;
	}
	system("leaks linkeddeque");
	return (0);
}