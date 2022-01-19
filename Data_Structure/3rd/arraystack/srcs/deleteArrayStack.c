/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteArrayStack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:25:11 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 15:16:44 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

void deleteArrayStack(ArrayStack* pStack)
{   
    //���� ó��
	if (!pStack)
        return;
    //�迭�� ����������� pop���� �����ش�
    while (!isArrayStackEmpty(pStack))
        popAS(pStack);
    //�޸� ����
    free(pStack->pElement);
    free(pStack);
    return;
}