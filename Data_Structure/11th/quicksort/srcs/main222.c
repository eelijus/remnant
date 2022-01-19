/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:32:02 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/27 15:30:07 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/NEWquicksort.h"

int main()
{
	DoublyList *myDoubleList;
	DoublyListNode node0 = {0};
	DoublyListNode *curr;
	int len = 0;
	int position = 0;
	char c;

	
	myDoubleList = createDoublyList();
	DoublyListNode *left = getDLElement(myDoubleList, 1);
	DoublyListNode *right = getDLElement(myDoubleList, myDoubleList->currentElementCount - 1);
	while(1)
	{
		printf("put Add Get Print Length : ");
		scanf(" %c", &c);
		switch (c)
		{
		case 'A':
			printf("data, position: ");
			scanf("%d %d", &(node0.data), &position);
			addDLElement(myDoubleList, position, node0);
			break;
		case 'G':
			printf("position: ");
			scanf("%d", &position);
			curr = getDLElement(myDoubleList, position);
			if(curr)
				printf("%d\n", curr->data);
			break;
		case 'P':
			displayDoublyList(myDoubleList);
			break;
		case 'S':
			quickSort(myDoubleList, left, right);
			break;
		default:
			break;
		}
	}
	if(myDoubleList)
		deleteDoublyList(myDoubleList);
	return (0);
}