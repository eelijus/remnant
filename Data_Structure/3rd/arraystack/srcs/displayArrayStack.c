/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayArrayStack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:30:03 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 14:55:50 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

void displayArrayStack(ArrayStack* pStack)
{
	//인덱스에 따른 데이터 출력
	//순회용 인덱스 생성
    int idx = pStack->currentElementCount - 1;
    //예외처리
    if (!pStack)
        return;
        
    printf("The max size of stack : %d\n", pStack->maxElementCount);
    printf("The current size of stack : %d\n", pStack->currentElementCount);
    while (idx > -1)
    {
        printf("{index: %d, data: %c}\n", idx, pStack->pElement[idx].data);
        idx--;
    }
}
