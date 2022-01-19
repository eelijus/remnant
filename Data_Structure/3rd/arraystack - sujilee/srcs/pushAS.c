/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushAS.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:57:25 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 11:11:07 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

int pushAS(ArrayStack* pStack, ArrayStackNode element)
{
	//���� ó��
	if (!pStack)
		return (FALSE);
	//���� �����÷ο� ����
	//�迭���ÿ� ���������� ���� ���
	if (!isArrayStackFull(pStack))
	{
		pStack->pElement[pStack->currentElementCount] = element;
		pStack->currentElementCount++;
		return (TRUE);
	}
	return (FALSE);
}