/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteLinkedDeque.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:23:35 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/07 14:29:41 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

void deleteLinkedDeque(LinkedDeque* pDeque)
{
	DequeNode *temp;
	
	if (!pDeque)
		return ;
	while (pDeque->currentElementCount)
	{
		temp = deleteFrontLD(pDeque);
		free(temp);
	}
	free(pDeque);
}