/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayArrayStack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:30:03 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 12:48:48 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

void displayArrayStack(ArrayStack* pStack)
{
	//인덱스에 따른 데이터 출력
	
	int	idx = pStack->currentElementCount - 1;
	
	if (!pStack)
		return ;
	while (idx > -1)
	{
		printf("index : %d ", idx);
		printf("data : %c\n", pStack->pElement[idx].data);
		idx--;
	}
	printf ("=================\n");
	printf("  max size   : %d\n", pStack->maxElementCount);
	printf("current size : %d\n", pStack->currentElementCount);

    // if (!pStack)
    //     return;
    // printf("The max size of stack : %d\n", pStack->maxElementCount);
    // printf("The max size of stack : %d\n", pStack->currentElementCount);
    // for (int i = 0; i < pStack->currentElementCount; i++)
    // {
    //     printf("{index: %d, data: %c}\n", i, pStack->pElement[i].data);
    // }
}
