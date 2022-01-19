/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createLinkedDeque.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:08:21 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/07 12:35:19 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

LinkedDeque* createLinkedDeque()
{
	LinkedDeque* myDeque;

	myDeque = (LinkedDeque *)malloc(sizeof(LinkedDeque));
	if (!myDeque)
		return (FALSE);
	myDeque->currentElementCount = 0;
	myDeque->pFrontNode = 0;
	myDeque->pRearNode = 0;
	
	return (myDeque);
}