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
	//예외 처리
	if (!pStack)
		return (FALSE);
	//스택 오버플로우 방지
	//배열스택에 여유공간이 있을 경우
	if (!isArrayStackFull(pStack))
	{
		pStack->pElement[pStack->currentElementCount] = element;
		pStack->currentElementCount++;
		return (TRUE);
	}
	return (FALSE);
}