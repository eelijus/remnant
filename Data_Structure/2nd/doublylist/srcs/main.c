/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:32:02 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/27 16:22:12 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/NEWquicksort.h"

int		main(void)
{
	DoublyList *myList;

	myList = createDoublyList();
	
	addDLElement(myList, 0, 80);
	addDLElement(myList, 1, 50);
	addDLElement(myList, 2, 70);
	addDLElement(myList, 3, 10);
	addDLElement(myList, 4, 60);
	addDLElement(myList, 5, 20);
	addDLElement(myList, 6, 40);
	addDLElement(myList, 7, 30);
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
		if (number == 6)
			break;
	}
	
	return (0);
}