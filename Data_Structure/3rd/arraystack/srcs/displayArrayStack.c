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
	//�ε����� ���� ������ ���
	//��ȸ�� �ε��� ����
    int idx = pStack->currentElementCount - 1;
    //����ó��
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
