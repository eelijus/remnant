/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:32:02 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/27 16:23:42 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/NEWquicksort.h"

int		main(void)
{

	int number;
	DoublyList *myList;
	DoublyListNode *left;
	DoublyListNode *right;

	myList = createDoublyList();

	addDLElement(myList, 0, 80);
	addDLElement(myList, 1, 50);
	addDLElement(myList, 2, 70);
	addDLElement(myList, 3, 10);
	addDLElement(myList, 4, 60);
	addDLElement(myList, 5, 20);
	addDLElement(myList, 6, 40);
	addDLElement(myList, 7, 30);

	left = myList->headerNode.pRLink;
	right = getDLElement(myList, myList->currentElementCount - 1);
	printf("insert done\n");
	while (1)
	{
		printf("1: Sort node\n2 : Print Node\n> ");
		scanf(" %d", &number);
		switch (number)
		{
			case 1:
				quickSort(left, right);
				printf("Quick Sort done\n");
				break;
			case 2:
				displayDoublyList(myList);
				break;
			default:
				break;
		}
	}
	
	return (0);
}